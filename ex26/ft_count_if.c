/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:18:28 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/21 10:48:34 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	char	*dest;
	int		count;
	int		counter;

	count = 0;
	counter = 0;
	while (tab[count] != NULL)
	{
		dest = tab[count];
		if (f(dest) == 1)
			counter++;
		count++;
	}
	return (counter);
}
