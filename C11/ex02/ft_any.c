/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:19:40 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 18:39:37 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	index;

	index = 0;
	while (tab[index] != NULL)
	{
		if (f(tab[index]))
			return (1);
		index++;
	}
	return (0);
}
