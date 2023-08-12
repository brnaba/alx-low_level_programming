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
char  ch  = 'a';
char sh = 'A';
while (ch  <= 'z')
{
putchar(ch);
ch++;
}
while (sh  <= 'Z')
{
putchar(sh);
sh++;
}
putchar('\n');
return (0);
}
