#ifndef SELIM_H
#define SELIM_H

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*File:selim.h
*Author:Pericles Adjovi
*Desc:header file containing functions declaration
*/


void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}


#endif /* SELIM_H */