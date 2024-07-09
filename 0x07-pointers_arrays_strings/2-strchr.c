#include "main.h"

/**
* _strchr - locates a character in a string
*
* @c: occurrence of the character
*
* @s: in the string
*
* Return: a pointer to the first occurrence of the character
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return s;
s++;
}
return NULL;
}
int main(void)
{
char *s = "hello";
char *f;
f = _strchr(s, 'l');
if (f != NULL)
{
printf("%s\n", f); // Output: "llo"
}
else
{
printf("Character not found.\n");
}
return 0;
}
