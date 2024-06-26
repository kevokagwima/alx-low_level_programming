#include "main.h"
/**
* main - Main function
* Return: Return a value
* print_alphabet - Prints the lowercase alphabet followed by a newline
*/
int main(void)
{
print_alphabet();
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
