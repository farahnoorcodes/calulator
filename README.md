

#  Simple Calculator (C)

A menu-driven calculator built in C that performs basic arithmetic operations along with square root and power calculations. The program runs in a loop, letting the user perform multiple operations in a single session until they choose to exit.

##  Features

- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division (with division-by-zero handling)
- √ Square Root (with negative number handling)
- 🔺 Power (base raised to an exponent)
- 🔁 Repeat option to perform multiple calculations without restarting the program
- ⚠️ Input validation for invalid menu choices

##  Tech Stack

- **Language:** C
- **Library:** `math.h` (for `sqrt()` and `pow()`)

##  How It Works

1. The program displays a menu with six operations.
2. The user enters a choice (1–6).
3. Depending on the choice:
   - Operations 1, 2, 3, 4, and 6 prompt for **two numbers**.
   - Operation 5 (Square Root) prompts for **one number**.
4. The result is calculated and printed with 2 decimal places.
5. The user is asked whether they want to perform another operation (`y`/`n`).
6. The loop continues until the user enters anything other than `y` or `Y`.

##  Sample Run

```
=.=.= CALCULATOR =.=.=
=====================
which OPERATION you want to do?
1. Addition ( press 1 )
2. Subtraction ( press 2 )
3. Multiplication ( press 3 )
4. Division ( press 4 )
5. Square Root ( press 5 )
6. Power ( press 6 )
=====================

Enter choice: 1
Enter first number: 10
Enter second number: 5
Result: 15.00

Do you want to perform another operation? (y/n): n
Exiting the calculator. Goodbye!
```

##  Getting Started

### Compile
```bash
gcc calculator.c -o calculator -lm
```

### Run
```bash
./calculator
```

>  The `-lm` flag links the math library, which is required for `sqrt()` and `pow()`.

##  Error Handling

- **Division by zero** → displays an error instead of crashing.
- **Square root of a negative number** → displays an error instead of returning `nan`.
- **Invalid menu choice** → displays an "Invalid choice" message and lets the user try again.

##  Author

**Farah Noor**
🔗 [GitHub: farahnoorcodes](https://github.com/farahnoorcodes)
<br>
Project: Summer internship 2026 at CodeAlpha

