#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of char: %zu bytes(s\n)", sizeof(char));
	printf("Size of int: %zu bytes(s\n)", sizeof(int));
	printf("Size of long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %zu bytes(s\n)", sizeof(long long int));
	printf("Size of float: %zu bytes(s\n)", sizeof(float));
	return (0);
}
