#include <stdio.h>
/**
* main - this function uses printf
* Return: Returns a value
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n'); // Print a newline
return (0);
}
