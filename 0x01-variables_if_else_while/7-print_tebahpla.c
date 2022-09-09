#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - entry point
 *   * Return: always 0 (success)
 */
int main(void)
{
char c = 'z';

for (; c >= 'a'; c--)
putchar (c);
putchar ('\n');
return (0);
}
