#include "main.h"
/**
* positive_or_negative - test negative or positive or zero
* @i : the function accept parameter i and determine it
* Return: 0 on success
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is zero\n", i);
}
return;
}
