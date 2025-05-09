# Simple Calculator
## 📌 Project Purpose
A fully interactive, menu‑driven calculator that runs in any terminal window.
It demonstrates clear function decomposition, robust input validation, and the use of the C standard library (math.h, string.h) to implement both basic and scientific operations.

## ✨ Key Features
- Seven Operators

    1. Addition +

    1. Subtraction ‑

    1. Multiplication *

    1. Division / (with zero‑division guard)

    1. Modulus % (integer remainder, zero guard)

    1. Exponentiation ^ (via pow)

    1. Square‑root r (via sqrt, non‑negative check)

- User‑Friendly Menu — clear prompts, looped execution until the user chooses Exit (e).

- Input Validation — verifies operator choice, rejects malformed numbers, and prevents undefined maths.

- Modular Design — each operation lives in its own function (addition, subtraction, …), plus helper utilities (getNum, validateOperations).

- Portable & Warning‑Free — builds cleanly under -Wall -Wextra -pedantic.

## 🛠️ Technologies & Techniques
|Area	          |Example	Why It Matters                                      |
|-----------------|-------------------------------------------------------------|
|Language	      |C	Modern standard, wide compiler support.                 |
|Math	          |pow, sqrt ( math.h )	Shows use of standard‑library maths.    |
|String / I/O     |	fgets, strlen, sscanf	Safe input handling without buffer overruns.                                                                       |
|Defensive Coding |	division‑by‑zero, invalid operator checks	Prevents runtime errors and undefined behaviour.    

<hr/>

Feel free to fork, star, or adapt the code for your own learning or coursework. Happy calculating! 🎉                                             
