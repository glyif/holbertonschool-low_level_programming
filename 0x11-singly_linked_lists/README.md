<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x11. C - Singly Linked Lists
## Author: Bobby Yang (Batch 2)

## Synopsis
A linked lists is a collection of data elements that has a pointer pointing to the next section of the list. They are somewhat similar to arrays. For both arrays and linkekd lists one is able to access a part of the list. However, for arrays, it's impossible to have an array of multiple data types and it's difficult to remove data in the middle of the array. Linked lists on the other hand is able to have multiple data types and it is much easier to move a node from the list.

For this assignment, the linked list stuct that will be used is this:
```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
- `@str` is the string that will have the data
- `@len` is th length of the string
- `@*next` is a pointer to the next node or `NULL`

## File Breakdown
### lists.h 
This is a header file containing all of the prototypes necessary for testing with a main function.

### 0-print_list.c
This file contains a function called `print_list`

This program prints all `str` elements in the linked list then returns the number of nodes in the list.

```c
size_t print_list(const list_t *h);
```

- `@h` is the pointer to the start of the linked list.

### 1-list_len.c
This file contains a function called `list_len`

This program returns the length of the linked list `@h`.

```c
size_t list_len(const list_t *h);
```

- `@h` is the pointer to the start of the linked list.

## Using
There's folder name main that has all of the files that test out these functions. The main file names correspond with the number in front of the name of the function files.

IE:
`0-main.c` corresponds with `0-print_list.c`

To compile the functions, you can use a command like this:
```bash
gcc -Wall -pedantic -Werror -Wextra main/0-main.c 0-print_list.c -o 0-print_list.c
```

For this command you will need to be in the `root` project folder, not the `main` folder. As you'll be compiling the `main/0-main.c` file in the `main` folder and the `0-print_list.c` file in the current directory.

## TODO
- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)

