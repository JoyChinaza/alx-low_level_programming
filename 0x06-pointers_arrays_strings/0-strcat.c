#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Advance the pointer to the end of the destination string */
    for (; *ptr; ptr++)
    {
        /* Do nothing */
    }

    /* Append the source string to the destination string */
    for (; *src; ptr++, src++)
    {
        *ptr = *src;
    }

    /* Add a null terminator to the end of the concatenated string */
    *ptr = '0';

    /*Return a pointer to the resulting string dest*/
    return dest;
}

