#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: the program generates random numbers for variable n.
*Return: Always (0) success
*/
int main(void)
{
int  n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else
printf("%d is negative", n);
return (0);
}
