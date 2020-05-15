# Monty bytecode Interpreter
## 0x19. C - Stacks, Queues - LIFO, FIFO

This is a Monty bytecode Interpreter created by Anthony Sims for Holberton School, Trimester 1.
This program interprets and runs Monty byte code.  Usage as follows:

* Usage
```
monty file
```
* Where `file` is the path to the file containing Monty byte code
* Program does not accept more than 1 file at a time, or 0 files. An error message will be generated before program exit.
* If a file contains an invalid instruction, an error message will be generated before program exit.
* The program will run the bytecodes line by line, stopping only if:
  - it executes properly
  - it finds an error
  - an error occured
