# Raymond's Remote-Lab-Controller
This is my project for the Hack Club Blueprint. I wanted to build this because I really like chemical engineering, and many times I needed to control my laptop from a safe distance during a reaction, but I couldn’t. I also enjoy engineering in general, and I wanted to try some electrical and software engineering projects to learn more about this part of science.
# How I started the project
As I said, I didn’t have any experience, so I followed the tutorial. I chose a simple setup with two buttons, a rotary encoder, and an OLED screen.
<img width="1915" height="962" alt="image" src="https://github.com/user-attachments/assets/e6c8c98f-c44d-4d94-8bc8-455269a0af77" />
# Schematic
After I figured out how to use KiCAD, I managed to make what I believe is a correct schematic.<img width="556" height="383" alt="Screenshot 2026-01-18 182845" src="https://github.com/user-attachments/assets/0a762a09-614a-4c3a-82d6-05698339bb5c" />
# PCB
Here is where the real design started. At this point I had to make a final decision about how to arrange my components and where to place the screen, which is a critical hardware and design element of my macropad.<img width="691" height="730" alt="Screenshot 2026-01-10 145642" src="https://github.com/user-attachments/assets/3fbee31b-18f4-41e7-8852-bdb461094152" />
## 
- The space above the microchip will be translucent
-  next to the encoder the whole design is symmetric and comfortable to hold.
  # 3D Design
  In this part I was already more experienced, but until now I hadn’t really used fully finished component models. At this point I started to get familiar with more precise design and real‑world application. I used Fusion 360 because it fits my experience level and it’s great for accurate design work. When I 3D print the model I will add the joints in Bambu studio
  
## The fully assembled model
<img width="852" height="540" alt="Képernyőkép 2026-04-16 201636" src="https://github.com/user-attachments/assets/0ee8afe9-a699-4eb3-a3fb-9197e6abbeb1" />

- The model from different perspectives

<img width="1919" height="1020" alt="Screenshot 2026-01-15 200638" src="https://github.com/user-attachments/assets/1ec8d2f9-cf54-408c-b052-67906df187d6" />
<img width="1919" height="1018" alt="Screenshot 2026-01-15 200649" src="https://github.com/user-attachments/assets/90974ff9-66cf-4c6f-99ec-b547dc3f81a4" />
<img width="1919" height="1018" alt="Screenshot 2026-01-15 200719" src="https://github.com/user-attachments/assets/b6f97444-29a7-474f-aca6-80750d3a0c90" />
- The case of the macropad
  <img width="909" height="589" alt="Képernyőkép 2026-04-16 202338" src="https://github.com/user-attachments/assets/18dc8b23-c221-4cf5-8928-b73b7b667400" />

- without the top part
   <img width="1919" height="1020" alt="Screenshot 2026-01-15 200730" src="https://github.com/user-attachments/assets/7b31a10b-0c48-44cd-abf7-64652346f512" />
     At the end of the modeling process, I made an engineering drawing.
   <img width="900" height="636" alt="Képernyőkép 2026-04-16 202727" src="https://github.com/user-attachments/assets/946314cc-7f37-4dc9-a86f-d08ea0122a1d" />

   - Here you can see the model’s dimensions.
  
   # The code
   In this field I am very inexperienced, and I used help to create my firmware. It was written in C++. It’s very likely that it still has some errors, but the main structure and idea are clearly represented in the code.
# List of materials
- Seeed XIAO RP2040
- 2 MX-Style switches
- EC11 Rotary encoder
- 1 PCB
- 0.91 inch OLED displays
- Case[I 3D print it ]
- 2 Cherry MX Keycaps[I 3D print it]
  



