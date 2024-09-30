/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 03:32:58 by nrey              #+#    #+#             */
/*   Updated: 2024/09/29 19:41:30 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	strou(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > i)
	{
		strou(argv[i]);
		i++;
	}
	return (0);
}
