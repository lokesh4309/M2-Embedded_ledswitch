# Requirements
# Introduction
Blinking of LED is a simple project in Embedded progamming world. There are several ways of making a blinking LED circuit. You can make one using relays. You can        make one using transistors. Or you can make one using components like an inverter, a 555 Timer or a microcontroller. Here swtich is used to blink the two LED using  ATmega328(a microcontroller).
# Objective
The main objective is to blink the led using ATmega328 and a switch to controll two LED's.
# Components used
1.ATmega328   

2.Two LED 

3.Switch

4.Resistor
# software used
1.simulIDe

2.Visual Studie Code
# Research
Atmega328 is an Atmel microcontroller, which is used in Arduino UNO board.Atmega328 has 28 pins in total. It has 3 Ports in total which are named as Port B,Port  C and Port D.Port C is an analogue Port and it has six pins in total. So, in simple words, ATmega328 has 6 analogue pins.Port B and Port D are digital ports and have 7 pins each.So, in total ATmega328 has 14 digital pins. It also supports Serial Communications, we can perform serial communication via Pin  2 (RX) and Pin 3 (TX).It also supports SPI Protocol.
<img width="457" alt="Screenshot 2021-12-01 at 8 24 00 PM" src="https://user-images.githubusercontent.com/94396238/144258251-fbeb07e4-0d7f-4378-ab41-bc5fb1c4a8f7.png">
# Features
It has simple features.
       
    1.It can switch off the LED's when switch is in off state.
    2.It can switch on the LED's when switch is in on state.
# 4W's and 1 H's
## Why
    1.To blink two LED's using a switch in ATmega328.
    2.To understand basic concepts in ATmega328.
## Where
    1. It can be used anywhere.
    2. It can be used for understanding purposes in schools and colleges.
## Who
    1.It can be used by students.
    2.It can be used by anyone who are new to embedded programming language.
## When
    1.People are trying to learn an embedded programming language.
    2.In schools and colleges it can be implemented.
## How
    1.By using softwares to exceute the program.
    2.By loading the program in ATmega328.
# SWOT Analysis
## Strengths
    1.Simple program to understand.
    2.Cost effective.
## Weakness
    1.Basic program.
## Opportunities
    1.Program can be made more complex by adding more components.
## Threats
    1.There are advanced programs which are simple to learn is out already.
# High Level Requirements
| Id    	| Description     	| Status      	|
|-------	|-----------------	|-------------	|
| HLR_1 	| Microcontroller 	| Implemented 	|
| HlR_2 	| Swtich          	| Implemented 	|
| HLR_3 	| Two LED         	| Implemented 	|
| HLR_4 	| Software        	| Implemented 	|
# Low Level Requirements
| Id    	| Description              	| Status      	|
|-------	|--------------------------	|-------------	|
| LLR_1 	| ATmega328                	| Implemented 	|
| LLR_2 	| Swtich                   	| Implemented 	|
| LLR_3 	| Two LED                  	| Implemented 	|
| LLR_4 	| Visual studio & SimulIDE 	| Implemented 	|
# Design
 1.This project uses ATmega328.
 
 2.This system uses swtich to blink LED.

# Behavior Diagram
![image](https://user-images.githubusercontent.com/94396238/144272780-fa1bfcc1-b1aa-45e7-8cd6-79aa6cbd1c49.png)
# Structural Diagram
![image](https://user-images.githubusercontent.com/94396238/144275991-46f93b74-ad39-4bc8-965d-2e624a2f6613.png)
# Block Diagram
![image](https://user-images.githubusercontent.com/94396238/144278065-7974d987-b89b-40b5-a545-e6383f08c3c7.png)
# Simulation
![Screenshot (3)](https://user-images.githubusercontent.com/94396238/144279597-aafad967-718b-4657-8759-4ce0452045ef.png)
# Implementation
# Folder Structure
| Folder   |      Description     |
|----------|:-------------:|
| document | Doxygen documentation |
| inc | All header files |
| simulation | simulation files |
| src | Main source code |
# Test Plan
# High Level Requirement
| Id    	| Description 	| Expected I/P 	| Expected O/P 	| Actual O/P 	| Type Of Test 	|
|-------	|-------------	|--------------	|--------------	|:----------:	|--------------	|
| HLR_1 	| Switch on   	| High power   	| LED On       	| LED On     	| Rquirement   	|
| HLR_2 	| Switch Off  	| No power     	| LED Off      	| LED Off    	| Requirement  	|
# Low Level Requirement
| Id    	| Description 	| Expected I/P 	| Expected O/P 	| Actual O/P 	| Type Of Test 	|
|-------	|-------------	|--------------	|--------------	|:----------:	|--------------	|
| LLR_1 	| Switch on   	| value 1      	| LED On       	| LED On     	| Rquirement   	|
| LLR_2 	| Switch Off  	| value 0      	| LED Off      	| LED Off    	| Requirement  	|
# Switch is Off
![Screenshot (3)](https://user-images.githubusercontent.com/94396238/144293747-b67b4a43-edf1-4f98-95d1-3e151d684f1b.png)
# Switch is On
![Screenshot (22)](https://user-images.githubusercontent.com/94396238/144293698-9a8abfbe-ddfc-446f-bb39-a5c3dd658f34.png)
![Screenshot (20)](https://user-images.githubusercontent.com/94396238/144293798-4c050c6c-e38f-4143-9de2-dcead97ca734.png)
