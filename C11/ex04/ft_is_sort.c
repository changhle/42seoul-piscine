/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:27:36 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 18:13:09 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	index;

	index = 0;
	while (index < length - 1)
	{
		if (f(tab[0], tab[1]) > 0 && f(tab[index], tab[index + 1]) < 0)
			return (0);
		else if (f(tab[0], tab[1]) < 0 && f(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}
