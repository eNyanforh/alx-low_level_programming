#include <stdio.h>
/**
 * main - This program prints the size of every computer types
 * Return: 0 (Success)
 */
int main(void)
{
char c=sizeof(char);
int i=sizeof(int);
long int li=sizeof(long int);
long long int lli= sizeof(long long int);
float f=sizeof(float);
printf("Size of a char: %lu byte(s)\n", c);
printf("Size of a int: %lu byte(s)\n", i);
printf("Size of a long int: %lu byte(s)\n", l)i;
printf("Size of a long long int: %lu byte(s)\n", lli);
printf("Size of a float: %lu byte(s)\n", f);
return (0);
}
