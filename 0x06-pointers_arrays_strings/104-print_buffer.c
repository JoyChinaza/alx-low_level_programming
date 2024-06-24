#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
    int offset, byte;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (offset = 0; offset < size; offset += 10)
    {
        // Print the offset in hexadecimal (8 characters)
        printf("%08x: ", offset);

        // Print the hexadecimal content (2 chars each), 2 bytes at a time, separated by a space
        for (byte = 0; byte < 10; byte++)
        {
            if (offset + byte < size)
                printf("%02x", b[offset + byte]);
            else
                printf("  ");
            
            if (byte % 2)
                printf(" ");
        }

        // Print the ASCII content
        for (byte = 0; byte < 10; byte++)
        {
            if (offset + byte < size)
            {
                if (isprint(b[offset + byte]))
                    printf("%c", b[offset + byte]);
                else
                    printf(".");
            }
        }

        // End the line
        printf("\n");
    }
}

