#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define NOTU(x) (void)(x)
#define BUFFER_SIZE 1024

/* SIZES */
#define SIZE_LONG 2
#define SIZE_SHORT 1

/* FLAGS */
#define FLAG_MINUS 1
#define FLAG_PLUS 2
#define FLAG_ZERO 4
#define FLAG_HASH 8
#define FLAG_SPACE 16

/**
 * typedef struct FormatSpecifier - Struct to represent a format specifier
 *
 * @specifier: The format specifier character.
 * @printFunction: The function associated with the specifier.
 */
typedef struct FormatSpecifier
{
	char specifier;
	int (*printFunction)(va_list, char[], int, int, int, int);
} fs_t;
int _putchar(char c);

/* Printing Functions */
int _printf(const char *format, ...);
int printf_helper(const char *format, int *currentIndex,
				  va_list argList, char buffer[], int flags,
				  int width, int precision, int size);

int print_character(va_list argList, char buffer[],
					int flags, int width, int precision, int size);
int print_string(va_list argList, char buffer[],
				 int flags, int width, int precision, int size);
int print_percent_sign(va_list argList, char buffer[],
					   int flags, int width, int precision, int size);

int print_integer(va_list argList, char buffer[],
				  int flags, int width, int precision, int size);
int print_binary(va_list argList, char buffer[],
				 int flags, int width, int precision, int size);
int print_unsigned_integer(va_list argList, char buffer[],
						   int flags, int width, int precision, int size);
int print_octal(va_list argList, char buffer[],
				int flags, int width, int precision, int size);
int print_hexadecimal(va_list argList, char buffer[],
					  int flags, int width, int precision, int size);
int print_hexadecimal_upper(va_list argList, char buffer[],
							int flags, int width, int precision, int size);

int print_hexadecimal_with_flags(va_list argList, char mapTo[],
								 char buffer[], int flags, char flagChar,
								 int width, int precision, int size);

int print_non_printable_characters(va_list argList, char buffer[],
								   int flags, int width, int precision, int size);

int print_pointer(va_list argList, char buffer[],
				  int flags, int width, int precision, int size);

int print_reversed_string(va_list argList, char buffer[],
						  int flags, int width, int precision, int size);

int print_rot13_encoded_string(va_list argList, char buffer[],
							   int flags, int width, int precision, int size);

/* Utility Functions */
int get_flags(const char *format, int *currentIndex);
int get_width(const char *format, int *currentIndex, va_list argList);
int get_precision(const char *format, int *currentIndex, va_list argList);
int get_size(const char *format, int *currentIndex);

int write_char(char character, char buffer[],
			   int flags, int width, int precision, int size);
int write_number_string(int isPositive, int index, char buffer[],
						int flags, int width, int precision, int size);
int write_number(int index, char buffer[], int flags, int width,
				 int precision, int length, char paddingChar, char extraChar);
int write_pointer(char buffer[], int index, int length,
				  int width, int flags, char paddingChar, char extraChar,
				  int paddingStart);

int write_unsigned(int isNegative, int index, char buffer[],
				   int flags, int width, int precision, int size);

long int convert_size_number(long int number, int size);
long int convert_size_unsigned(unsigned long int number, int size);

int is_character_printable(char character);
int append_hexadecimal_code(char digit, char buffer[], int index);
int is_digit_char(char character);

#endif /* _PRINTF_H */
