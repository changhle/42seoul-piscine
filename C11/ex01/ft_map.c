/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:10:43 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 17:59:45 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*arr;
	int	index;

	arr = (int *)malloc(sizeof(int) * (length + 1));
	if (arr == NULL)
		return (arr);
	index = 0;
	while (index < length)
	{
		arr[index] = f(tab[index]);
		index++;
	}
	return (arr);
}
