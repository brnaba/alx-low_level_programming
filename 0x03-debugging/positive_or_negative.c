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
printf("℅d is ℅s\n", i, "negative");
}
else if (i > 0)
{
printf("℅d is ℅s\n", i, "positive");
}
else
{
printf("℅d is ℅s\n", i, "zero");
}
return (0);
}
