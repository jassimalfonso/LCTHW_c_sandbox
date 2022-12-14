// Example program #2 from Chapter 19 of Absolute Begginer's Guide
// to C, 3rd Edition
// File Chapter19ex2.c

/* This program asks a user for their hometowm and the two-letter
abbreviation of their home state. It then uses string concatenation
to build a new string with both town and state and prints it using
puts. */

// stdio.h is needed for puts() and gets()
// string.h is needed for strcat()

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char city[15];
	// 2 char for the state abbrev. and one for the null zero
	char st[3];
	char fullLocation[18] = "";

	puts("What town do you live in? ");
	gets(city);

	puts("What state do you live in? (2-letter abbreviation)");
	gets(st);

	/* Concatenates the strings */
	strcat(fullLocation, city);
	strcat(fullLocation, ", "); // Adds a comma and space between the city
	strcat(fullLocation, st); // Adds the state abbreviation

	puts("\nYou live in ");
	puts(fullLocation);
	return(0);
}