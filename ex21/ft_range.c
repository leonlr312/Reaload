/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:37:34 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/21 10:31:53 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	number;
	int	*dest;
	int	index;

	index = 0;
	number = max - min;
	dest = malloc(number * sizeof(int));
	if (min >= max)
		return (0);
	while (min < max)
	{
		dest[index] = min;
		min++;
		index++;
	}
	return (dest);
}
