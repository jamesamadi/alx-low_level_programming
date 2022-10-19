#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two arguments passed to the program
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 1 if successful
 */

int main(int argc, char *argv[])
{
    int n1, i = 1;

    if (i < argc && argc > 1)
    {
        n1 = atoi(argv[i]) * atoi(argv[i + 1]);
        printf("%d\n", n1);
    }
    else
    {
        printf("Error\n");
        return 1;
    }
    return 0;
}