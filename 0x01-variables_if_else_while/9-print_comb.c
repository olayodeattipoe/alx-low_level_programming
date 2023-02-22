
KonAsa
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
More
alx-low_level_programming/0x01-variables_if_else_while/9-print_comb.c

KonAsa 9-print_comb.c
 History
 1 contributor
27 lines (25 sloc)  413 Bytes
#include <stdio.h>

/**
 * main -  program that prints all possible combinations of single-digit
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 48;
int com = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(com);
putchar(32);
}
n += 1;
}
putchar('\n');
return (0);
}
