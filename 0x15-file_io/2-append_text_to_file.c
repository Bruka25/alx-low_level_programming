#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *append_text_to_file - Appends text at end of a file
 *
 *@filename: Pointer to name of file to create and its NULL
 *@text_content: Pointer to the contents of a file
 *
 *Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int words;
	int output;

	words = 0;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[words] != '\0')
			words++;
		output = write(file, text_content, words);
		if (output == -1)
			return (-1);
	}

	close(file);
	return (1);
}
