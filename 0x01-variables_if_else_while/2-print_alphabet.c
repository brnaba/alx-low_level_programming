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
while (ch  <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
