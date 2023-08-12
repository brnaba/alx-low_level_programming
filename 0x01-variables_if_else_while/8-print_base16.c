#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: the program prints alphabet in lowercase .
*Return: Always (0) success
*/
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
putchar(i);
for (j = 97; j <= 102; j++)
putchar(j);
putchar('\n');
return (0);
}
