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
    int element;

    for (element = 0; element < n; element++)
    {
        printf("%d", a[element]); /* Print each element */

        /* Add comma and space except after the last number */
        if (element < n - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}
