<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x12. C - More singly linked lists
## Author: Bobby Yang (Batch 2)

## Synopsis
A linked lists is a collection of data elements that has a pointer pointing to the next section of the list. They are somewhat similar to arrays. For both arrays and linkekd lists one is able to access a part of the list. However, for arrays, it's impossible to have an array of multiple data types and it's difficult to remove data in the middle of the array. Linked lists on the other hand is able to have multiple data types and it is much easier to move a node from the list.

For this assignment, the linked list stuct that will be used is this:
```c
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
- `@n` is integer data stored int the node
- `@*next` is a pointer to the next node or `NULL`

## File Breakdown
### lists.h 
This is a header file containing all of the prototypes necessary for testing with a main function.

### 0-print_listint.c
This file contains a function called `print_listint`

This program prints the integer data from a linked lists. 
```c
size_t print_listint(const listint_t *h);
```

- `@h` is the pointer to the start of the linked list.

### 1-listint_len.c
This file contains a function called `listint_len`

This program returns the length of the linked list `@h`.

```c
size_t listint_len(const listint_t *h);
```

- `@h` is the pointer to the start of the linked list.

### 2-add_nodeint.c
This file contains a function called `add_nodeint`.

```c
listint_t *add_nodeint(listint_t **head, const int n);
```

This program takes in the address of the head node and a const string and creates a new node that's head and inputs `n` into the `n` field.

- `@head` is the address of the head passed in.
- `@n` is the integer stored in the node

### 3-nodeint_end.c
This file contains a function called `add_nodeint_end`.

This program takes in a head node and appends a node to the end of the list. If head is the null, make the the node the head.

```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```

- `@head` is the head node of a linked list that you want to append a node at the end of
- `@n` is the integer stored in the node

### 4-free_listint.c
This file contains a program called `free_listint`.

```c
void free_listint(listint_t *head);
```
This program takes the head of a linked lists and frees up all subsequent nodes recursively.

- `@head` the head of a linked list

### 5-free_listint2.c
This file contains two functions `free_listint` and `free_listint2`. `free_listint` is the same function as 4-free_listint.c

```c
void free_listint2(listint_t **head);
```
This program frees a list then points head to NULL;

- `@head` is the head of a linked list

### 6-pop_listint.c
This file contains function called `pop_listint`.

```c
int pop_listint(listint_t **head);
```
This program deletes the head node of a list and returns the data in the node.

- `@head` is the address of the head of the list.

### 7-get_nodeint.c
This file contains a function called `list_len` and `get_nodeint_at_index`.

```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```
These functions combined fetches the data of sepcific index of a linked list.

- `@head` is the head of a linked list
- `@index` is the index of the linked list data should be fetched from

### 8-sum_listint.c
This file contains a function called `sum_listint`.

```c
int sum_listint(listint_t *head);
```
This function adds up all the integer data from every node of a linked list.

- `@head` is the head of a list.

### 9-insert_nodeint.c
This file contains a function called `insert_nodeint_at_index`.

```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

This function inserts a node at a given index.

- `@head` is the address of the head of the list
- `@idx` is the index where node should be inserted
- `@n` is the data int the node

### 10-delete_nodeint.c
This file contains a function called `list_len` and a function called `delete_nodeint_at_index`.

```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```
This program deletes a node at a specific index.

- `@head` is the head of a node
- `@index` is the index of the node to delete.

## Using
There's folder name main that has all of the files that test out these functions. The main file names correspond with the number in front of the name of the function files.

IE:
`0-main.c` corresponds with `0-print_listint.c`

To compile the functions, you can use a command like this:
```bash
gcc -Wall -pedantic -Werror -Wextra main/0-main.c 0-print_listint.c -o 0-print_listint
```

For this command you will need to be in the `root` project folder, not the `main` folder. As you'll be compiling the `main/0-main.c` file in the `main` folder and the `0-print_listint.c` file in the current directory.

## TODO
- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)

