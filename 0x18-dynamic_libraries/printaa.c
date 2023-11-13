#include <stdlib.h>
#include <unistd.h>

int _print(const char format, ...);

int _print(const char format, ...)
{
	write(1, "9 8 10 24 75 9\n", 16);
	write(1, "congratulations you win the jackpot!\n", 38);

	exit(EXIT_SUCCESS);
}
