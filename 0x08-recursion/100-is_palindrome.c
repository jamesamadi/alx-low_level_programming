#include "main.h"
int total_lenght(char *s);
int check_string(char *s, int j, int p);
/**
 * is_palindrome - to evaluate palindrome string
 * @s: string to evaluate
 * Return: return 1 for affirmitive othrwise zero
 **/

int is_palindrome(char *s)
{
    return (check_string(s, 0, total_lenght(s) - 1));
}

/**
 * check_string - evaluate pointer to a string
 * @s: string to evaluate
 * @j: incrementing integer
 * @p: counts string lenght
 * Return: return 1 for palidom e string else 0
*/

int check_string(char *s, int j, int p)
{
    if (*(s + j) == '\0')
        return (1);
    if (*(s + j) != *(s + p))
        return (0);
    if (*(s + j) == *(s + p))
    {
        if ((j == p) || (j == (p + 1)))
            return (1);
        return (check_string(s, j + 1, p - 1));
    }
    return (0);
}

/**
 * total_lenght - calculates the string lenght
 * @s: string to evaluate
 * Return: the string count value on getting tp '\0'
 **/

int total_lenght(char *s)
{
    if (*s == '\0')
        return (0);
    else
        return (1 + total_lenght(s + 1));
}