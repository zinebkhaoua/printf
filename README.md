# Custom Printf Implementation

This project is an implementation of a custom `printf` function in C, designed to replicate some of the functionality of the standard `printf` from the C standard library. It supports various format specifiers, including custom ones, and different flags and modifiers.

## Table of Contents

1. [Introduction](#introduction)
2. [Project Details](#project-details)
3. [Usage](#usage)
4. [Custom Format Specifiers](#custom-format-specifiers)
5. [File Structure](#file-structure)
6. [Compilation and Testing](#compilation-and-testing)
7. [Contributors](#contributors)

## Introduction

The goal of this project is to create a custom `printf` function that can format and print various data types, including characters, strings, integers, and custom binary, pointer, string, and other format specifiers.

## Project Details

### Implemented Features

- Basic format specifiers: `%c`, `%s`, and `%%`.
- Integer format specifiers: `%d` and `%i`.
- Custom binary specifier: `%b`.
- Unsigned integer format specifiers: `%u`, `%o`, `%x`, and `%X`.
- Custom string specifier: `%S`.
- Custom pointer specifier: `%p`.
- Flag characters: `+`, `space`, and `#`.
- Length modifiers: `l` and `h`.
- Field width and precision.
- Custom reverse string specifier: `%r`.
- Custom ROT13 string specifier: `%R`.

### Future Improvements

This project can be further extended to handle more advanced features and edge cases, such as handling custom and standard error output and internationalization.

## Usage

To use this custom `printf` function, follow these steps:

1. Clone this repository.
2. Include the `main.h` header file in your C code.
3. Call `_printf` with your desired format string and arguments.

Example:

```c
#include "main.h"

int main(void) {
    _printf("Hello, %s! You have %d apples.\n", "Alice", 42);
    return (0);
}



## Custom Format Specifiers

'%b' for binary representation.
'%S' for printing strings with non-printable characters.
'%p' for printing pointers.
'%r' for printing reversed strings.
'%R' for printing ROT13-encoded strings.


## File Structure

'main.h' : The header file containing function prototypes and necessary includes.
'holberton.h' : A header file containing a structure for format specifiers and function prototypes.
'get_format_specifier.c' : A function to get the correct format specifier function.
'format_specifiers_1.c' , 'format_specifiers_2.c' , etc. : Files containing functions for various format specifiers.
'buffer.c' : Functions for managing a buffer for output.
'utils.c' : Utility functions used in the main printf function.
'error_handling.c' : Functions for handling errors.





