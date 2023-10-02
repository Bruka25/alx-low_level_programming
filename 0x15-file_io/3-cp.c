#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * file_copy - copies file from src to dest
  * @src: Pointer to place where the file is copied from
  * @dest: Pointer to the destination of the copied file
  *
  * Return: Void
  */

void file_copy(const char *src, const char *dest)
{
	int src_fd, dest_fd, data;
	char buffer[1024];

	src_fd = open(src, O_RDONLY);
	if (!src || src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	dest_fd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((data = read(src_fd, buffer, 1024)) > 0)
	{
		if (write(dest_fd, buffer, data) != data || dest_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (data == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}

/**
  * main - Where the program executes
  * @argc: Argument coount
  * @argv: Pointer to the argunents
  *
  * Return: exit 0 on success
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_copy(argv[1], argv[2]);
	exit(0);
}
