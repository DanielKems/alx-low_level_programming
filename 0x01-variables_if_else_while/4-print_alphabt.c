#include <stdio.h>

/**
 * *main- Print alphabet except q - e
 * *
 * *Return: Always 0
 */

int main(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{

if (letter == 'q' || letter == 'e')
letter++;

putchar (letter);
}
putchar ('\n');
return (0);
}
