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
  In this part I was already more experienced, but until now I hadn’t really used fully finished component models. At this point I started to get familiar with more precise design and real‑world application. I used Fusion 360 because it fits my experience level and it’s great for accurate design work.
  
## The fully assembled model
<img width="1918" height="1016" alt="Screenshot 2026-01-15 200624" src="https://github.com/user-attachments/assets/1f042488-fe9e-489d-8465-7e4269ee225c" />
- The model from different perspectives

<img width="1919" height="1020" alt="Screenshot 2026-01-15 200638" src="https://github.com/user-attachments/assets/1ec8d2f9-cf54-408c-b052-67906df187d6" />
<img width="1919" height="1018" alt="Screenshot 2026-01-15 200649" src="https://github.com/user-attachments/assets/90974ff9-66cf-4c6f-99ec-b547dc3f81a4" />
<img width="1919" height="1018" alt="Screenshot 2026-01-15 200719" src="https://github.com/user-attachments/assets/b6f97444-29a7-474f-aca6-80750d3a0c90" />
- The case of the macropad
<img width="1919" height="1021" alt="Screenshot 2026-01-15 200746" src="https://github.com/user-attachments/assets/5075b85e-f1ff-4ba1-b2ce-dae18f0e9c4a" />
 - without the top part
   <img width="1919" height="1020" alt="Screenshot 2026-01-15 200730" src="https://github.com/user-attachments/assets/7b31a10b-0c48-44cd-abf7-64652346f512" />
     At the end of the modeling process, I made an engineering drawing.
   <img width="957" height="678" alt="Screenshot 2026-01-15 202216" src="https://github.com/user-attachments/assets/03f4bc33-e300-493d-bd81-0a164f0eb24b" />
   - Here you can see the model’s dimensions.
  
   # The code
   In this field I am very inexperienced, and I used help to create my firmware. It was written in C++. It’s very likely that it still has some errors, but the main structure and idea are clearly represented in the code.




