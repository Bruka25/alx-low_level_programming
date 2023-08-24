include <main.h>
include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int bit, idx;

	for (bit = 0; bit < size; bit += 10)
	{
		printf("%08x: ", bit);

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + bit) >= size)
				printf("  ");

			else
				printf("%02x", *(bit+ idx + y));

			if ((idx % 2) != 0 && idx != 0)
				printf(" ");
		}

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + bit) >= size)
				break;

			else if (*(b + idx + bit) >= 31 &&
				 *(b + idx + bit) <= 126)
				printf("%c", *(b + idx + bit));

			else
				printf(".");
		}

		if (bit >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
