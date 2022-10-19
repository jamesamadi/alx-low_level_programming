#include <stdio.h>
#include <stdlib.h>
int check_digit(const char *s);
/**
 * main - checks if argument vectors are digits
 * @s: string to check
 * Return: 0 if successful
 **/
int check_digit(const char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}


/**
 * main - adds two numerical arguments passed to the program
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 0 if successful
 **/

int main(int argc, char const *argv[])
{
    int i, money, total_coin = 0;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return(1);
    }

    if (check_digit(argv[1]))
    {
        money = atoi(argv[1]);

        for (i = 0; money > 0 && i <= 4; i++)
        {
            while (money >= coins[i])
            {
                money -= coins[i];
                total_coin++;
            }
        }
    }

    printf("%i\n", total_coin);

    return (0);
}