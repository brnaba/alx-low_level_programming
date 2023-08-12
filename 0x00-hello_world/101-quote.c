#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: This program use function 'putchar' to print a string.
* Return: Always (1) error
*/
int main(void)
{
char ch[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int y = atoi(ch);
putchar(y);
putchar('\n');
return (1);
}
