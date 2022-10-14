#include "main.h"

/**
 * _strpbrk - returns pointer to the searched string
 * @s: string to be scanned
 * @accept: string to scan for.
 * Return: the string of found words
 */

char *_strpbrk(char *s, char *accept)
{
    int i, j, k = 0;

    for (j = 0; accept[j] != '\0'; j++)
        k = j;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j <= k; j++)
        {
            if (s[i] == accept[j])
            {
                s = &s[i];
                return (s);
            }
        }
    }
    return ('\0');
}