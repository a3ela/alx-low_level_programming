# 0x06. C - More pointers, arrays, and strings

Welcome to the `0x06-pointers_arrays_strings` directory! In this section, we delve deeper into pointers, arrays, and strings in the C programming language. These concepts are essential for understanding memory management, data manipulation, and string handling.

## Tasks Overview
Here's a detailed explanation of the tasks in this directory:

1. **0-strcat.c**:
   - Write a function that concatenates two strings.
   - Prototype: `char *_strcat(char *dest, char *src);`
   - This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\\0`) at the end of `dest`, and then adds a terminating null byte.
   - Returns a pointer to the resulting string `dest`.

2. **1-strncat.c**:
   - Write a function that concatenates two strings, but with a specified maximum number of characters from `src`.
   - Prototype: `char *_strncat(char *dest, char *src, int n);`
   - Appends at most `n` characters from `src` to `dest`.
   - Returns a pointer to the resulting string `dest`.

3. **2-strncpy.c**:
   - Write a function that copies a string, but with a specified maximum number of characters.
   - Prototype: `char *_strncpy(char *dest, char *src, int n);`
   - Copies at most `n` characters from `src` to `dest`.
   - If `src` is shorter than `n`, the remaining characters in `dest` are filled with null bytes.
   - Returns a pointer to the resulting string `dest`.

4. **3-strcmp.c**:
   - Write a function that compares two strings.
   - Prototype: `int _strcmp(char *s1, char *s2);`
   - Compares the ASCII values of corresponding characters in `s1` and `s2`.
   - Returns an integer less than, equal to, or greater than zero if `s1` is less than, equal to, or greater than `s2`, respectively.

5. ... (list other tasks and their descriptions based on your actual repository)


