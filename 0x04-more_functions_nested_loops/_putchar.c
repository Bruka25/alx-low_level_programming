/**
 *_putchar - Entry point of the function.
 *
 *@c: Is the character to print.
 *
 *Response: Always 0.
 */

int _putchar(char, c)
{
    return (write(1, &c, 1));
}
