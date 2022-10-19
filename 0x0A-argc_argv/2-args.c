#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments of the program
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 1 if successful
 */

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}