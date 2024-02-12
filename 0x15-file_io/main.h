#ifndef FILE_I/O
#define FILE_I/O
#include <stdlib.h>
#include <stdio.h>
#include <fnctl.h>
#include <unistd.h>
#define READ_BUF_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
