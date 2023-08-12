#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: the program prints alphabet in lowercase reverse .
*Return: Always (0) success
*/
int main(void)
{
char  ch  = 'z';
while (ch  >= 'a')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
