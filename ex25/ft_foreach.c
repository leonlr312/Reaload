/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:02:07 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/18 17:16:28 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	count;
	int	dest;

	count = 0;
	while (count < length)
	{
		dest = tab[count];
		f(dest);
		count++;
	}
}
