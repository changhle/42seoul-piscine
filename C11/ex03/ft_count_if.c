/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:22:49 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 18:02:29 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (index < length)
	{
		if (f(tab[index]))
			count++;
		index++;
	}
	return (count);
}
