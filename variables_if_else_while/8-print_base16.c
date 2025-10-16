#include <stdio.h>

/**
* main - prints all the numbers of base 16 (hexadecimal) in lowercase
* Return: Always 0 (Success)
*/

int main(void)
{

int num;

for (num = '0'; num < '10'; num++)

putchar(num + '0');

for (num = 'a'; num <= 'f'; num++)

putchar(num);

putchar('\n');

return (0);
}
