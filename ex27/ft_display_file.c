/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:24:49 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:13:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(char *file)
{
	int		fd;
	int		count;
	char	buffer[90];

	count = 1;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ;
	while (count != 0)
	{
		count = read(fd, buffer, 90);
		if (count < 0)
			return ;
		write(1, buffer, count);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	char	*file;
	int		count;

	count = 1;
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	file = argv[count];
	ft_display(file);
	return (0);
}
