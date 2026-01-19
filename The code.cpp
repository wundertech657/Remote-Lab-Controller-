
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <TinyUSB_Mouse_and_Keyboard.h>  // HID support

// OLED setup
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Pin assignments
const int ENC_A = 1;      // GPIO26
const int ENC_B = 3;      // GPIO28
const int ENC_SW = 10;    // GPIO4 (mode switch)

const int BTN_START = 8;  // GPIO1
const int BTN_STOP = 9;   // GPIO2 (stop/reset + left click)

// Stopwatch variables
unsigned long startTime = 0;
bool running = false;

// Intensity variables
int intensity = 0;
int lastEncA = HIGH;

// Mode control
enum Mode { STOPWATCH, INTENSITY };
Mode currentMode = STOPWATCH;

// Debounce helper
unsigned long lastButtonPress = 0;
const unsigned long debounceDelay = 200;

void setup() {
  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
  pinMode(ENC_SW, INPUT_PULLUP);
  pinMode(BTN_START, INPUT_PULLUP);
  pinMode(BTN_STOP, INPUT_PULLUP);

  Wire.setSDA(5); // GPIO6
  Wire.setSCL(6); // GPIO7
  Wire.begin();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.display();

  Mouse.begin(); // Initialize HID mouse
}

void loop() {
  // --- Mode switch via encoder button ---
  if (!digitalRead(ENC_SW) && millis() - lastButtonPress > debounceDelay) {
    currentMode = (currentMode == STOPWATCH) ? INTENSITY : STOPWATCH;
    lastButtonPress = millis();
  }

  // --- Button 8: Start stopwatch ---
  if (!digitalRead(BTN_START) && millis() - lastButtonPress > debounceDelay) {
    if (currentMode == STOPWATCH && !running) {
      running = true;
      startTime = millis();
    }
    lastButtonPress = millis();
  }

  // --- Button 9: Stop/Reset + HID left click ---
  if (!digitalRead(BTN_STOP) && millis() - lastButtonPress > debounceDelay) {
    Mouse.click(MOUSE_LEFT); // Always send left click

    if (currentMode == STOPWATCH) {
      if (running) {
        running = false;
      } else {
        startTime = 0;
      }
    }
    lastButtonPress = millis();
  }

  // --- Rotary encoder for intensity ---
  int encA = digitalRead(ENC_A);
  if (encA != lastEncA && encA == LOW) {
    if (digitalRead(ENC_B) == HIGH) intensity++;
    else intensity--;
  }
  lastEncA = encA;

  // --- Display update ---
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  if (currentMode == STOPWATCH) {
    display.setTextSize(2);
    unsigned long elapsed = running ? millis() - startTime : startTime;
    int seconds = (elapsed / 1000) % 60;
    int minutes = (elapsed / 60000);
    display.setCursor(0, 0);
    display.printf("%02d:%02d", minutes, seconds);
    display.setTextSize(1);
    display.setCursor(0, 22);
    display.print("Mode: Stopwatch");
  } else {
    display.setTextSize(2);
    display.setCursor(0, 0);
    display.print(intensity);
    display.setTextSize(1);
    display.setCursor(0, 22);
    display.print("Mode: Intensity");
  }

  display.display();
}
