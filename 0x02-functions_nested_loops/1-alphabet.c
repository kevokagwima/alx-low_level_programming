#include "main.h"

/**
* main - Main function
* Return: Return a value
* print_alphabet - Prints the lowercase alphabet followed by a newline
*/
#include "main.h"

int main(void)
{
print_alphabet(); // Call the print_alphabet function
return (0);
}

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
