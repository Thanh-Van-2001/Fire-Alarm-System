# Fire-Alarm-System

## Overview
Currently, fire and explosion is a frequent natural disaster. Therefore, the fire fighting system becomes a necessary system for each house, warehouse, etc. For the purpose of timely notification and fire fighting, protecting property as well as human life in the most optimal way. Therefore, the team carried out the project with the desire to create an automatic alarm and fire fighting model controlled by pic16f877a, which can be applied to real life right at your home.

## Usage
+ Used for high-rise buildings, central systems with high traffic, densely populated areas, workshops, factories.
+ Applied in learning, research and development of more modern models.
+ Used to warn the concentration of smoke and dust.
+ Integration into other embedded devices.

Advantages:
+ Compact device easy to install.
+ Suitable for most projects
+ Low installation cost.
+ Low energy consumption.
+ High mobility.

## Simular Diagram
![proteus](https://user-images.githubusercontent.com/81580234/176589630-fbb7bff2-94be-4b8b-8851-f8d0aa991b57.png)

## Working principle
Smoke, gas and flame detection. Send information about Pic after it is processed make a decision to perform alarm and fire fighting
Working mechanism of Smoke sensor MQ2: Measure the flammable content in the air and output voltage at the corresponding AO pin
Working mechanism of flame sensor:
When the module is active, the signal pins will signal to the control device. Then signal Dout pin:
+ High level signal is no fire.
+ Low signal is fire.
When there is an analog signal from the smoke sensor (>200/1023) or there is a high level signal from the flame sensor Pic processes and outputs a pulse hash signal to turn on the leds and speakers, and outputs a high level signal. as high as module L298 activates the water pump motor to conduct fire fighting
The messages on the LCD display:
Safety (When no problem has occurred)-> Warning (when detecting high smoke concentration or detecting fire) -> Safety (When fire fighting is finished and press the reset button to reset the system)

## Future
Future IoT fire safety system
As more emergency systems are interconnected in the future, managers and construction workers should have access to these dashboards in addition to firefighters.
Additionally, Smart Fire Alarm systems will use artificial intelligence (AI) to detect false alarms and provide contextual information on how to prevent them.
An AI-equipped detection system will tell the facility manager whether or not the fire department needs to be called. Information about the cause of an event and how first responders responded to emergencies in the past helps the software generate a score.
Furthermore, algorithms will help detect anomalies in data from multiple sensors. These anomalies can include sensor malfunctions, security breaches, etc.

## Our team
* Tuyen M.Vu 
* Hieu Dinh D.Ta
* Thanh V.Nguyen

## References
* Internet Sources:
Arduino Fire Alarm - Arduino Project Hub
