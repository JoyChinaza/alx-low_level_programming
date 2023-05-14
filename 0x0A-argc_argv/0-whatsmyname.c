#include <stdio.h>
#include"main.h"

int main(int argc, char* argv[])
{
	int i;
	for (i=0;i < argc;i++)
	{
		printf("%s ", argv[i]);

	}
	printf("\n");

	if (argc > 0)
	printf ("%s\n", argv[0]);

	return (0);

}
