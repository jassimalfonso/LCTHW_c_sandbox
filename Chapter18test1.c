/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chapter18test1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:50:18 by jalfonso          #+#    #+#             */
/*   Updated: 2022/12/14 02:04:47 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	first_init;
	int	last_init;

	printf("What are your initials?\n");
	first_init = getchar();
	last_init = getchar();
	getchar();
	printf("Your initials are %c.%c.\n", first_init, last_init);

	// printf("What are your initials?\n");
	// // This will produce an error pertaining to C99 usage of getch()
	// // Generally, stay away from using the getch() function
	// first_init = getch();
	// last_init = getch();
	// printf("Your initials are %c.%c.\n", first_init, last_init);
	return (0);
}
