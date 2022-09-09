#include <stdio.h>

/**
 *  * main - print numbers from 0 to 9
 *   *
 *    * Return: Always 0
 */
int main(void)
{
int n = '0';

while (n <= '9')
putchar(n++);
putchar('\n');
return (0);
}
