#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_f(const char *filename, size_t letters);
int c_file(const char *filename, char *text_content);
#endif

