#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the items in an array
 * @arr: array to be printed
 * @n: number of element to print
 * Return: 0
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", arr[i]);
		if (i == (n - 1))
		{
			printf("%d", arr[n - 1]);
		}
	}
	printf("\n");
}

/**
 * print_array - using pointers to print items in an array
 * void print_array(int *arr, int n)
 * {
 * int i;
 *
 * for(i = 0; i < n; i++){
 * printf("%d", arr[i]);
 * if (i < n - 1){
 * printf(", ");
 * }
 * }
 * putchar('\n');
 * }
 */
