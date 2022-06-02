/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:03:20 by changhle          #+#    #+#             */
/*   Updated: 2021/09/29 16:16:54 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	index;

	arr = NULL;
	if (max > min)
	{
		arr = (int *)malloc(sizeof(int) * (max - min + 1));
		if (arr == NULL)
			return (arr);
		index = 0;
		while (min < max)
		{
			arr[index] = min;
			min++;
			index++;
		}
		arr[index] = '\0';
	}
	return (arr);
}
