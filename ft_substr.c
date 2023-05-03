/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:15:58 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 13:26:44 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	length;
	char	*str;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start < len)
		count = start - len;
	if (start >= length)
		count = 0;
	if (count > len)
		count = len;
	str = (char *) malloc(sizeof(char) * (count +1));
	if (!str)
		return (NULL);
	if (count == 0)
	{
		str[0] = '\0';
		return (str);
	}
	ft_strlcpy(str, (s + start), (count + 1));
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "abcdef";

// 	ft_substr(s, 2, 4);
// 	printf("%s\n", s);
// }
