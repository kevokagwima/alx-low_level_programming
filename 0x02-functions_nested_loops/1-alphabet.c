#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
