/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:34:34 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/26 13:24:29 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	unsigned char	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		index;
	char	*arg;

	index = 1;
	while (index < argc -1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			arg = argv[index];
			argv[index] = argv[index +1];
			argv[index + 1] = arg;
			index = 0;
		}
		index++;
	}
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
