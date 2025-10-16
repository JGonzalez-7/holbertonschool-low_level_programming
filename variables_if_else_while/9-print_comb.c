#include<stdio.h>
/**
* main - Entry point Working with putchar and commas.
* Return: Always 0 (Success)
*/

int main(void)
{

int n;

for (n = 0; n <= 9; n++)

putchar(n + '0'),

(n < 9) ? putchar(',') : 0,
(n < 9) ? putchar(' ') : 0;

putchar('\n');

return (0);
}
