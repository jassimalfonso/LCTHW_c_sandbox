// Example program #1 from Chapter 10 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter10ex1.c

/* This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1. */

// Tweaked to while loop for count

#include <stdio.h>

int	main(void)
{
	int ctr = 0;

	while (ctr < 5)
		printf("Counter is at %d.\n", ctr += 1);
	while (ctr > 1)
		printf("Counter is at %d.\n", ctr -= 1);

	ctr == 0 ? printf("\nWell Done! ctr = %d", ctr) : printf("\nSorry, try again.");

	return (0);
}