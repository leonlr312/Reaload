/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:05:49 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/17 18:06:28 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (count > 1)
	{
		nb = nb * (count - 1);
		count--;
	}
	return (nb);
}
