#include "main.h"
/**
 * positive_or_negative - Checking if a number is positive or negative
 * @i: integer to be checked
 *
 * Return: Always (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0) 
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}	
