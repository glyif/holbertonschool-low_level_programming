<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x0F. C - Variadic functions
## Author: Bobby Yang (Batch 2)

## Synopsis
Variadic functions are functions that can take in any number of arguments. You can easily spot a variadic function by looking at how the function is defined. If you see an ellipsis passed as an argument then that function is a variadic function.

Here's an example:
```c
double average(int num,...)
```
In this example you see that the function `average` takes in an integer `num` and then an ellipsis `...` and returns a double.

- `@num` will most likely be the number of numbers the function will be taking in.
- `@...` will be `num` number of arguments


## File Breakdown
### variadic_functions.h 
This is a header file containing all of the prototypes necessary for testing with a main function.

### 0-sum_them_all.c
This file contains a function that takes in a variable number of integers and returns the sum of all of those integers.

```c
int sum_them_all(const unsigned int n, ...);
```
The function takes in a variable number of integers and returns the sum of all of them

- `@n` is the number of interger arguments that follows
- `@...` is the variable length of integers that the function will add

### 1-print_numbers.c
This file contains a function called print_numbers.

```c
void print_numbers(const char *separator, const unsigned int n, ...);
```
The function takes in a variable length of number that will be print with a separator between them.

- `@separator` is the string that sepearates the printed numbers IE: `, `
- `@n` is the number of numbers the variable length is
- `@...` is the n length of variable arguments

### 2-print_strings.c
This file contains a function called print_strings.

```c
void print_strings(const char *separator, const unsigned int n, ...);
```
The function takes in a variable number of strings that will be printed by a separator between them

- `@separator` is the string that separates the printed strings IE: `, `
- `@n` is the number of strings following
- `@...` are the n number of strings that will be printed

### 3-print_all.c
This file is a program that prints anything, ANYTHING. I wrote a bunch of helper functions that takes care of differnt formats like `int`, `char`, `string`, and `float`.

There are few restrictions though...
- No use of `for`, `goto`, `ternary operator`, `else`, `do ... while`
- Only 2 `while` loops and 2 `if` statments
- Maximum of `9` variables

```c
void print_char(char *seperator, va_list ap);
```
This function takes in a seperator and a variable argument list and prints it.

- `@seperator` is the string that separates the printed arguments.
- `@ap` is the va_list that you are passing in for the va_arg

```c
void print_int(char *seperator, va_list ap);
```
This function takes in a seperator and a variable argument list and prints it.

- `@seperator` is the string that separates the printed arguments.
- `ap` is the va_list I'm passing in for the va_arg.

```c
void print_float(char *seperator, va_list ap);
```
This function takes in a seperator and a variable argument list and prints it.

- `@seperator` is the string that separates the printed arguments.
- `ap` is the va_list I'm passing in the for the va_arg

```c
void print_string(char *seperator, va_list ap);
```
This function takes in a seperator and a variable argument list and prints it.

- `@seperator` is the string that separates the printed arguments.
- `ap` is the va_list I'm passing in for the va_arg

**This is the bulk of the program:**
```c
void print_all(const char * const format);
```
This takes in a double `const` pointer thats the formater string. IE: `ceis`. `c - char, e - nothing, i - integer, s - string`

In this function I have a struct array that has the formater char, IE: `c` and a function that get pointed to. IE: `print_char`.

Here's the definition of the structure:
```c
typedef struct print
{
	char *c;
	void (*f)();
} print,
```
- `@c` is the char that corresponds with the function pointer
- `(*f)` is the function pointer with unspecified arguments pointing to the function that prints according to `@c`

Then there's a loop that loops through the format string, then a nested loop within that loops through my struct array and matches the value of the index of `format` string to the `char` value of my struct.

If the value of the index of `format` string matches a `char` value in my struct array, I then pass in the va_list into the function of that specific struct and a string that's a seperator. IE: `print_struct[i].f(va_list, seperator)`.

The function ends when `format == NULL` or `format[i] == '\0'`.

## Using
There's folder name main that has all of the files that test out these functions. The main file names correspond with the number in front of the name of the function files.

IE:
`0-main.c` corresponds with `0-sum_them_all.c`

To compile the functions, you can use a command like this:
```bash
gcc -Wall -pedantic -Werror -Wextra main/0-main.c 0-sum_them_all.c -o sum_them_all
```

For this command you will need to be in the `root` project folder, not the `main` folder. As you'll be compiling the `main/0-main.c` file in the `main` folder and the `0-sum_them_all.c` file in the current directory.

## TODO
- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)
