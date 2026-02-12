# DFD (Dataflow Diagram)
https://www.geeksforgeeks.org/software-engineering/difference-between-flowchart-and-data-flow-diagram-dfd/  
### What is it?
* Graphical tool used to represent how data moves through a system. Inputs, outputs, data stores, processes.
* **High level overview of system functionability**
* Supposed to be intuitively obvious --> **as the user**

### Levels
DFD has heierarchies
1. Level 0 (context diagram): represents entire system as one single process
2. Level 1: major subprocesses, internal data
3. Level 2: decompose level 1  
When making the sublevel of another level, make sure that the input and output is the same.

#### Components
Process, flow, store, terminator.
**Process** (bubble, function, transformation): part of the system that transforms input into output -->  
  *In this class, usually **circle for user, rectangle for process**, described with a phrase or simple setence. **NEEDS input and output**
**Flow**: 
