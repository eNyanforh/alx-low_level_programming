#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the name of the program
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * without having to compile it again
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
        printf("%s\n", *argv);

        return (0);
}
