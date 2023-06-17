#include <stdio.h>
/**
* main - This program prints numbers between 0 to 9 separated by commas.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf("%d", i);
if (i != 9)
{
printf(", ");
}
}
printf("\n");
return 0;
}
