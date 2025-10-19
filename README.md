# Final practice of the week: `while` (continue/break) + basic `for` in C

This project contains a C program that:
- Validates `N` in [1..20].
- Reads grades with a **`while` loop** using `continue` (to filter out of range) and `break` (key 999 to terminate).
- Calculates counters (pass, excellent, mid-range, even) and **average** of valid grades.
- Prints a **table with `for` of the number of passes (1..10).

## Requirements
- C compiler compatible with C11 (GCC/Clang/MinGW).

## Compile
```bash
# Linux/macOS
gcc -std=c11 -Wall -Wextra -O2 -o practice main.c

# Windows (MinGW)
gcc -std=c11 -Wall -Wextra -O2 -o practi.exe main.c
Execute
Bash
Copy code
./practice # Linux/macOS
practi.exe # Windows
