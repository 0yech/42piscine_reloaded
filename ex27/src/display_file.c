/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 03:39:41 by nrey              #+#    #+#             */
/*   Updated: 2024/09/29 20:40:19 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	prt_error(int error)
{
	if (error == 1)
		write(2, "File name missing.\n", 19);
	else if (error == 2)
		write(2, "Too many arguments.\n", 20);
	else if (error == 3)
		write(2, "Cannot read file.\n", 19);
}

int	errorcheck(int argc)
{
	if (argc == 1)
	{
		prt_error(1);
		return (1);
	}
	else if (argc > 2)
	{
		prt_error(2);
		return (2);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		file;
	int		error_code;
	char	buf[1024];
	ssize_t	count;

	error_code = errorcheck(argc);
	if (error_code != 0)
		return (error_code);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		prt_error(3);
		return (3);
	}
	count = read(file, buf, sizeof(buf));
	while (count > 0)
	{
		write(1, buf, count);
		count = read(file, buf, sizeof(buf));
	}
	close(file);
	return (0);
}
