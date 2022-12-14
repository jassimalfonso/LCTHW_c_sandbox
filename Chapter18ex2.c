/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chapter18ex2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:30:35 by jalfonso          #+#    #+#             */
/*   Updated: 2022/12/14 01:36:45 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Example program #2 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex2.c

/* This program is nothing more than a simple demonstration of the
getchar() function. */

// getchar() is defined in stdio.h, but string.h is needed for the
// strlen() function

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	char	msg[25];

	printf("Type up to 25 character and then press Enter...\n");
	i = 0;
	while (i < 25)
	{
		msg[i] = getchar(); // Outputs a single character
		if (msg[i] == '\n')
		{
			i--;
			break;
		}
		i++;
	}
	putchar('\n'); // One line break after the loop is done.
	
	while (i >= 0)
	{
		putchar(msg[i]);
		i--;
	}
	putchar('\n');
	
	return(0);
}