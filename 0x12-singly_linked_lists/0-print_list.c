#include "lists.h"
#include <unistd.h> // for write function

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;
    char *str;
    unsigned int len;
    const list_t *current = h;

    while (current != NULL)
    {
        str = current->str;
        len = current->len;

        if (str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            _putchar('[');
            if (len == 0)
            {
                _putchar('0');
            }
            else
            {
                char buf[10];
                int i = 0;
                while (len > 0)
                {
                    buf[i++] = (len % 10) + '0';
                    len /= 10;
                }
                while (i > 0)
                {
                    _putchar(buf[--i]);
                }
            }
            _putchar(']');
            _putchar(' ');

            while (*str)
            {
                _putchar(*str);
                str++;
            }
            _putchar('\n');
        }

        current = current->next;
        node_count++;
    }

    return node_count;
}

