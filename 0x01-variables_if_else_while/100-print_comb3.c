#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
int i, i2;

i2 = '0';
for (i = '0'; i < '9'; i++)
{
for (i2 = i + 1; i2 <= '9'; i2++)
{
if (i != i2)
{
putchar(i);
putchar(i2);
if (i == '8' && i2 == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
