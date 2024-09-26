/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 04:20:10 by nrey              #+#    #+#             */
/*   Updated: 2024/09/20 04:28:51 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dupe;

	if (src == NULL)
		return (NULL);
	i = 0;
	dupe = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dupe == NULL)
		return (NULL);
	while (src[i])
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
