#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
int i, i2, i3;

i2 = '0';
i3 = '0';
for (i = '0'; i < '9'; i++)
{
for (i2 = i + 1; i2 <= '9'; i2++)
{
for (i3 = i2 + 1; i3 <= '9'; i3++)
{
putchar(i);
putchar(i2);
putchar(i3);
if (i == '7' && i2 == '8' && i3 == '9')
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
