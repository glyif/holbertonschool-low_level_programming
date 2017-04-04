#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
