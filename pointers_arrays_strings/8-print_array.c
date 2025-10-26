#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Description: prints the first n elements of the array,
 * separated by a comma and space.
 * Return: void
 */
void print_array(int *a, int n)
{
    int index;

    for (index = 0; index < n; index++)
    {
        printf("%d", a[index]); /* Print each element */

        /* Add comma and space except after the last number */
        if (index < n - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}
