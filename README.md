# (1)Use Radio Communication to Run a Motor Remotely 
### Ganga Singh
### EC25B1108
## MaRS TASK2 2026  

---

## Understanding Components  

I was given a NodeMCU ESP8266, a DC motor, and an L298N motor driver. I went through the pinouts of both ESP8266 and L298N and tried relating them with what I already knew from Arduino (like output pins, 5V, 3.3V, GND, etc.). I focused on understanding how the motor driver connects with the ESP8266 and how the overall circuit should be built. I did take help from the internet as allowed, and then moved on to understanding how RemoteXY works.  

---

## Understanding RemoteXY  

This is where I spent most of my time because RemoteXY was completely new to me. I had worked with Arduino and similar microcontrollers before, but something like RemoteXY creating a GUI, generating source code, and understanding how it all works together was new. I explored the RemoteXY website, created a GUI, and used two sliders one for turning the motor ON OFF and another for changing its direction. I then took the generated source code and moved to Arduino IDE to integrate it with my ESP8266 code.  

---

## Writing Code for ESP8266  

This part was relatively easy since I already knew Arduino (C++). The logic was almost the same, just the pin names were different. Before writing and uploading the code, I installed all the required libraries and board packages, including the ESP8266 board definitions and the RemoteXY library, along with any other necessary downloads. I then implemented the logic for motor control based on RemoteXY inputs and moved on to hardware.  

---

## Hardware Wiring  

Wiring was straightforward since I had already understood the pinouts. I connected the ESP8266 with the L298N motor driver and prepared everything for uploading the code.  

---

## Final Working?  

Initially, my laptop did not detect the ESP8266. After resolving that, while uploading the code, I got an error:  

RemoteXY.h: No such file or directory


This was confusing because I had already installed the required libraries. I tried reinstalling, but it still didn’t work. Avinash Anna helped by trying from his laptop, but even then it took time and didn’t fully resolve. I was told that the issue was likely with the library, and that my code and wiring were correct.  

---

## What Did I Learn?  

This was my first time working with ESP8266, and it was exciting to build something wireless controlling a motor from my phone. I understood how ESP8266 uses WiFi for communication, learned how to use the L298N motor driver with a microcontroller, and got hands on experience with RemoteXY GUI and control logic.  

Even though I couldn’t demonstrate the final working due to the RemoteXY library issue, the process made me more interested in ESP8266. I have already ordered my own NodeMCU to explore more wireless projects.  
