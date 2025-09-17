# Libft - 42 School Project

**Libft** is the first project in the 42 School curriculum's "Common Core." Its objective is to recreate a series of standard C library functions from scratch. This project serves as a fundamental building block for future projects, as instead of relying on the standard C library, we will use our own implementation – **libft**. Through this, we will gain a deep understanding of how these functions work under the hood and become comfortable with low-level programming concepts.

## Overview

Libft is a custom library that mirrors many functions from the standard C library (libc), including additional utility functions not found in libc. The project is divided into three main parts:

1. **Reimplementation of Standard C Library Functions**
2. **Additional Utility Functions**
3. **Bonus: Linked List Functions**

In addition, I have extended the library with implementations of functions from other key projects in the 42 curriculum: `ft_printf` (a printf-like function) and `get_next_line` (a function for reading input line by line).

## Functions Implemented

### Part 1: Standard C Library Functions

These are functions from the standard C library that are reimplemented to understand their workings in detail:

- **Character Check Functions**:
  - `ft_isalpha` - Checks for alphabetic characters.
  - `ft_isdigit` - Checks for digits (0-9).
  - `ft_isalnum` - Checks for alphanumeric characters.
  - `ft_isascii` - Checks if a character is ASCII.
  - `ft_isprint` - Checks for printable characters.

- **String and Memory Manipulation Functions**:
  - `ft_strlen` - Calculates the length of a string.
  - `ft_memset` - Fills a block of memory with a constant byte.
  - `ft_bzero` - Zeroes a block of memory.
  - `ft_memcpy` - Copies a block of memory.
  - `ft_memmove` - Moves a block of memory, handling overlapping memory areas.
  - `ft_strlcpy` - Copies a string to a destination buffer with size limitation.
  - `ft_strlcat` - Concatenates strings with size limitation.

- **Character Case Conversion Functions**:
  - `ft_toupper` - Converts a lowercase character to uppercase.
  - `ft_tolower` - Converts an uppercase character to lowercase.

- **String Search and Comparison Functions**:
  - `ft_strchr` - Locates the first occurrence of a character in a string.
  - `ft_strrchr` - Locates the last occurrence of a character in a string.
  - `ft_strncmp` - Compares two strings up to a specified number of characters.
  - `ft_memchr` - Scans memory for a specific byte.
  - `ft_memcmp` - Compares two memory areas.
  - `ft_strnstr` - Locates a substring in a string with a length limit.

- **Conversion Functions**:
  - `ft_atoi` - Converts a string to an integer.

- **Memory Management Functions**:
  - `ft_calloc` - Allocates and zeroes a block of memory.
  - `ft_strdup` - Duplicates a string.

### Part 2: Additional Utility Functions

These functions are not part of the standard C library but are essential utilities for string manipulation and file handling:

- `ft_substr` - Extracts a substring from a string.
- `ft_strjoin` - Concatenates two strings into a new string.
- `ft_strtrim` - Trims leading and trailing whitespace (or specified characters) from a string.
- `ft_split` - Splits a string into an array of strings based on a delimiter.
- `ft_itoa` - Converts an integer to a string.
- `ft_strmapi` - Applies a function to each character of a string and returns a new string.
- `ft_striteri` - Applies a function to each character of a string in-place.
- `ft_putchar_fd` - Outputs a character to a file descriptor.
- `ft_putstr_fd` - Outputs a string to a file descriptor.
- `ft_putendl_fd` - Outputs a string to a file descriptor, followed by a newline.
- `ft_putnbr_fd` - Outputs an integer to a file descriptor.

### Part 3: Bonus - Linked List Functions

This part of the project implements various functions for manipulating singly linked lists, which are not available in the standard C library:

- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds an element at the beginning of a list.
- `ft_lstsize` - Returns the size of a list.
- `ft_lstlast` - Returns the last element of a list.
- `ft_lstadd_back` - Adds an element at the end of a list.
- `ft_lstdelone` - Deletes one element from a list.
- `ft_lstclear` - Deletes and frees an entire list.
- `ft_lstiter` - Iterates over a list and applies a function to each element.
- `ft_lstmap` - Applies a function to each element of a list and returns a new list.

### Extended Features

In addition to the core Libft functions, I’ve incorporated two major functions from other 42 projects:

- **ft_printf** - A simplified version of the `printf` function. It formats and outputs data to the standard output, supporting various format specifiers such as `%d`, `%s`, `%x`, etc.
- **get_next_line** - A function that reads a line from a file descriptor, returning one line at a time. Useful for reading from files or standard input in a controlled manner.


## How to Use

To compile the library, simply run the following command:

```bash
make
```

This will create a `libft.a` file, which can be linked with your other C projects.

To clean up object files after compilation, use:

```bash
make clean
```

To remove both object files and the compiled library, use:

```bash
make fclean
```

To recompile the library from scratch, use:

```bash
make re
```

## Usage Example

Here’s an example of how you might use **libft** in your own C projects:

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, World!";
    char *dup = ft_strdup(str);
    
    ft_putstr_fd(dup, 1); // Output: Hello, World!
    ft_putchar_fd('\n', 1);
    
    free(dup);
    return (0);
}
```

In this example, we use `ft_strdup` to duplicate a string, and `ft_putstr_fd` and `ft_putchar_fd` to print it to standard output.

## Conclusion

**Libft** is a critical project that lays the foundation for understanding how many fundamental C library functions work. By writing these functions from scratch, you'll gain a deep insight into memory management, pointer arithmetic, and efficient data manipulation, which will be invaluable for future projects at 42 and beyond.

Feel free to clone the repository and adapt the library for your own projects!
