#ifndef VARIADIC_H
#define VARIADIC_H
#define FORMAT(f) ("%"#f)

/**
 *struct print_form - Define a format to print
 *
 *@c: Character to check for
 *@f: Pointer to function to call
 */

typedef struct print_form
{
	char *c;
	void (*f)();
} print_form_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
