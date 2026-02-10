## DFD (Dataflow Diagram)
https://www.geeksforgeeks.org/software-engineering/difference-between-flowchart-and-data-flow-diagram-dfd/  
### What is it?
* Graphical tool used to represent how data moves through a system. Inputs, outputs, data stores, processes.
* High level overview of system functionability

### Levels
DFD has heierarchies
1. Level 0 (context diagram): represents entire system as one single process
2. Level 1: major subprocesses, internal data
3. Level 2: decompose level 1

## Flowchart
https://www.geeksforgeeks.org/software-engineering/what-is-dfddata-flow-diagram/  
### What is it?
* Diagrammatic representation of algorithms
* Describes the step by step of algorithms
* More low level  
Reference Berkom.

## Differences between DFD and Flowchart

|Difference|DFD|Flowchart|

## History of Computers
Britannica: computer is a device form working with information --> does not have to be electronic

https://www.geeksforgeeks.org/computer-science-fundamentals/history-of-computers/  
![Evo of computers](lampiran/evolution%20of%20compueters.png)  
### Pre-computer era
1. Abacus (4000 BCE) -- beads strung on rods to perform simple arithmetic operations like addition and substraction
2. Napier's Bones 1616 -- set of ivory rods engraved with numbers
### Mechanical Calculators
1. Pascaline (1642-1644) -- mechanical calculator using gears and wheels
2. Stepped reckoner (1673) -- uses fluted drums instead of gears calculator
3. Difference Engine (1820s) -- **Charles Babbage**, Father of Modern Computing, mechanical device meant to calculate polynomials
4. Analytical Engine (1830s) -- mechanical design included control unit, memory, input output using punch cards
### Electronic Computing
1. Tabulating Machine (1890) -- mechanical tabulator with punch cards, capable of tabulating and record data
2. Differential Analyzer (1930s) -- **FIRST ELECTRONIC COMPUTER**, **analog** by **Vannevar Bush**. Vacuum tubes to switch electrical signals
3. Mark 1 (1944) -- IBM Harvard **first programmable digital computer**
### Transistors (1950s-1960s)
1. Transistor computers (1950s)
2. UNIVAC I (1951) -- **FIRST COMMERCIAL SUCCESSFUL COMPUTER**
### Rise of IC (1960s-1970s)
1. IBM System/360 (1964)
2. PDP-8, PDP-11
### Personal Computer (1970s-1980s)
1. Apple II (1977)
2. IBM PC (1981)
3. Macintosh (1984) -- **FIRST CONCEPT OF GUI**
### Internet and Networking (1990s-Now)
1. WWW
2. Cloud computing -- AWS, Google Drive, etc
### Modern day and future
1. AI
2. Quantum computing
3. IoT
### Generations
1. First (1940-1956): slow, expensive, vacuum tubes for CPU and memory, punch cards
2. 


## Digital/Analog
### Analog (1930-1940)
* Development in MIT, using op-amps, etc
* Data representation is continuous, any value within the limits of power
### Digital
Data representation within is discrete (0 or 1, actually a voltage level)

## System using Analog
### Kelvin Feedback Technique
Using Laplace and closed loop feedback to ...

## History of Computers
Abacus, slide rule were the first, but they had no means of storage.  
Jacquard -- IBM punch cards were one of the first that has storage (by punching cards)  
Babbage used it for difference engine

War accelerated computer development

So ENIAC wasn't the first, but there was Zuse Z3 (German, 1941) and COLLOSUS (British, 1943), Enigma machine -- used to decrypt code from german aircrafts

0. Pre-generation -- ENIAC, etc
1. First generation 
2. Second generation --> uses transistors. 1956 TRADIC, etc
3. Third generation --> uses IC, IBM/360
4. Fourth Generation --> Personal computers using microcontrollers and other ICs. Apparently there isn't much difference between 1MHz 8080 with 2GHz Pentium

## CPU
Has arithmetic logic unit, ...

## Language Hierarchy
1. High-level (C, C++, ...)
2. Assembly language (symbolic, dependent on target processor/computer), mnemonics
3. Machine language, opcodes and operands, understood by computer  
E.g.
``` shell
if (iBal < 0)
    {Statements}
else if (iBal == 0)
    {Statements}
else
    {Statements}
```

## C
What is it? High level compiled standardized language
1. Write source files in English
2. Compile source files into executable files that will run on a specific computer  
**Host**: computer the programming is done on  
**Target**: computer that runs the program

# ...
### Why should we be in this class?
* To know the interaction between software and hardware
* Learn to avoid numeric error (overflow, etc)
* Learn to exploit hardware  
We have leverage over IF over...
* Cost cutting, efficiency
* Specificity of program

### Making our first program
1. `hello` program is created using a text editor and saved as `hello.c`
...
``` c
#include <stdio.h>

```
Every statement must be translated to machine instructions (in binary) --> packaged to exe object program and stored in a binary file.  
The **translation process** is performed by a **compiler**
#### Compilation System
1. Preprocessing phase - preprocesser (cpp) modifies C program according to directive
2. Compilation phase -- compiler (ccl) translates text file 
3. Assembly phase 

hello.c --> cpp --> ccl --> as --> id

#### Hardware organization
CPU --> register file with ALU with Bus interface, interacts with...
I/O bridge -

1. Bus -- parallel conduits, carries bytes of information between components
2. I/O device - 
3. Main memory -- temporary storage that holds program and data  
  * Physically: is a collection of dynamic RAM
  * Logically, is organized as ...

#### Execution
USB controller --> I/O bridge --> bus interface --> register file --> bus interface --> I/O bridge --> main memory
Output writing from memory to display: Main memory ---> I/O bridge --> register file --> I/O bridge --> graphical interface

#### Cache memory
Needed to solve problem of speed difference between processor and main memory  
--> Hihgh speed temporary static RAM

#### OS and HW
OS manages all hardware components, level between application and hardwares (main meomry, etc)

