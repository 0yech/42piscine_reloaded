/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 04:35:07 by nrey              #+#    #+#             */
/*   Updated: 2024/09/29 19:43:08 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	diff;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	tab = malloc(sizeof(int) * diff);
	if (tab == NULL)
		return (NULL);
	while (i < diff)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
