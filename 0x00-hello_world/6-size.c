#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: This program print size of various types.
*Return: Always (0) success
*/
int main(void)
{
char ch;
int i;
long int  l;
long long int ll;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(ch));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(l));
printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
