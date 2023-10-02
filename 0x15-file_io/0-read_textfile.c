#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *read_textfile - Reads textfile and prints it to POSIX stdout
 *
 *@filename: Pointer to file argument
 *@letters: Number of letters it should read and print
 *
 *Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_c, write_c;
	char *temp;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	read_c = read(file, temp, letters);
	if (read_c == -1)
		return (0);

	write_c = write(STDOUT_FILENO, temp, read_c);
	if (write_c == -1 || read_c != write_c)
		return (0);
	free(temp);

	close(file);
	return (write_c);
}
