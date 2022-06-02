/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:39:39 by changhle          #+#    #+#             */
/*   Updated: 2021/09/29 16:27:17 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	size;

	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (size + 1));
	if (*range != NULL)
	{
		index = 0;
		while (index < size)
		{
			range[0][index] = min + index;
			index++;
		}
		range[0][index] = '\0';
		return (size);
	}
	return (-1);
}
