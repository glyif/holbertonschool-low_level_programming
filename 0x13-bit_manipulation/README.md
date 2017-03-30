<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x13. C - Bit manipulation
## Author: Bobby Yang (Batch 2)

## Synopsis
Bit manipulation is manipulating data that's smaller than a byte, henceforth the name bit manipulation. Bit manipulation is faster than complex arithmetic operations like division and multiplication. So, bit manipulation is desireable for more efficient/faster code. Because of the power of modern computing, most programs don't need to rely on bit maniuplation but in some cases, it is better. Cases like compression algorithms like huffman coding. There is also a common special case of storing 8 `bool` variables into one byte, like unix file permissions and CPU flags.

## File Breakdown
### holberton.h 
This is a header file containing all of the prototypes necessary for testing with a main function.

### 0-binary_to_uint.c
This file contains a function called `binary_to_unit`

```c
unsigned int binary_to_uint(const char *b);
```

This program takes a string of 1s and 0s (binary) and converts it to an unsigned integer decimal.

- `@b` is the pointer to the string of 1s and 0s (notice it's a const)

### 1-print_binary.c
This file contains a function called `print_binary`


```c
void print_binary(unsigned long int n);
```

This program prints an unsigned long int as binary.

-`@n` unsigned long int that the program will turn into binary

### 2-get_bit.c
This file contains a function called `get_bit`.

```c
int get_bit(unsigned long int n, unsigned int index)
```

This program gets a bit value at a specific number.

- `@n` is the integer to get bit value from
- `@index` is the index of `n` to get the bit from

### 3-set_bit.c
This file contains a function called `set_bit`.


```c
int set_bit(unsigned long int *n, unsigned int index);
```

This program sets a bit to `1` at a given index.

- `@n` pointer to an int
- `@index` the index that the program will set to `1`

### 4-clear_bit.c
This file contains a program called `clear_bit`.

```c
int clear_bit(unsigned long int *n, unsigned int index);
```

This program clears a bit by setting it to `0` at a given index;

- `@n` is pointer to the integer
- `@index` is the index the program will set to 0;

### 5-flip_bits.c
This file contains a function called `flip_bit`.

```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```
This program return the number of bits flipped to get from `n` to `m`.

- `@n` initial integer
- `@m` secondary integer

## Using
There's folder name main that has all of the files that test out these functions. The main file names correspond with the number in front of the name of the function files.

IE:
`0-main.c` corresponds with `0-binary_to_uint.c`

To compile the functions, you can use a command like this:
```bash
gcc -Wall -pedantic -Werror -Wextra main/0-main.c 0-binary_to_uint.c -o 0-binary_to_uint.c
```

For this command you will need to be in the `root` project folder, not the `main` folder. As you'll be compiling the `main/0-main.c` file in the `main` folder and the `0-binary_to_uint.c` file in the current directory.

