#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two intergers
 * @argc: count arguement
 * @argv: argument vector
 * Return: 0 if true 1 if false
 */
int main(int argc, char *argv[])
{
	int y, z;

	if (argc == 1)
	{
		y = atoi(argv[1]);
		z = atoi(argv[2]);
		printf("%d\n", y * z);
		return (0);
	}
	printf("Error\n");
	return (1);
}
