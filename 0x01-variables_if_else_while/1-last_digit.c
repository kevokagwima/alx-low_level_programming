#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - this function uses printf
* Return: Returns a value
*/
int main(void)
{
int n;
int last_digit;
srand(time(NULL));
n = rand() % 100;
printf("Last digit of %d is %d is ", n, last_digit);
last_digit = n % 10;
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
