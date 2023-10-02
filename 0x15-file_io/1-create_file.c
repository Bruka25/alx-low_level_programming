#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_file - Function that creates a file
 *
 *@filename: Pointer to name of file to create and its NULL
 *@text_content: Pointer to the contents of a file
 *
 *Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor, output;
	int i;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		output = write(descriptor, text_content, i);
		if (output == -1)
			return (-1);
	}

	close(descriptor);
	return (1);
}
