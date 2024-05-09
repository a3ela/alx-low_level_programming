# 0x03-debugging

Welcome to the `0x03-debugging` directory! In this section, we explore the art of debugging in C programming. Debugging is the process of identifying and fixing errors (bugs) in your code. As you become a more advanced programmer and an industry engineer, you'll learn how to use debugging tools such as `gdb` or built-in tools that IDEs provide.

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without relying on external resources:

1. **What is Debugging?**: Understand the purpose and importance of debugging in software development.
2. **Manual Debugging Methods**: Learn various manual debugging techniques, such as reading error messages and analyzing code.
3. **Fixing Infinite Loops**: Practice identifying and fixing infinite loops in your programs.
4. **Correcting Logic Errors**: Improve your skills in identifying and correcting logical errors in code.
5. **Handling Leap Years**: Fix issues related to calculating leap years in date-related functions.

## Tasks Overview
Here's a brief overview of the tasks in this directory:

1. **0-main.c, main.h**:
   - Based on the provided `main.c` file, create a file named `0-main.c`.
   - Test that the function `positive_or_negative()` gives the correct output when given a case of 0.
   - You are not coding the solution/function; you're just testing it.
   - You can adapt your function from `0x01. C - Variables, if, else, while - Task #0` to compile with this main file for local testing.
   - Upload only `0-main.c` and `main.h` for this task.

2. **1-main.c**:
   - Comment out (don't delete it!) the part of the code that is causing the output to go into an infinite loop.
   - You are only allowed to comment out existing code; do not add or remove any lines.
   - Compilation with `-Wall -Werror -Wextra -pedantic` is not required for this task.

3. **2-largest_number.c**:
   - Fix the code so that it correctly prints out the largest of three numbers, regardless of the case.
   - Line count will not be checked for this task.

4. **3-print_remaining_days.c**:
   - Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.
   - You can assume that all test cases have valid months and days.
   - Valid month/day combinations are assumed, but not all month/day/year combinations are valid.
   - Leap years must be handled correctly.

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Ensure that all your files end with a new line.
- Follow the Betty style for code formatting.

Feel free to customize the descriptions or add any additional information you'd like. Once you're satisfied with the README, make sure to update it in your GitHub repository. If you have any further requests or need assistance, feel free to ask! 😊🚀
