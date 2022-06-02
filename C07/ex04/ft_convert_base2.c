/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:14:04 by changhle          #+#    #+#             */
/*   Updated: 2021/09/28 12:57:45 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);

int	ft_count_result(unsigned int result, int to_len, int sign)
{
	int	cnt;

	cnt = 0;
	if (sign == -1)
		cnt++;
	while (1)
	{
		cnt++;
		if (result / to_len == 0)
			break ;
		result /= to_len;
	}
	return (cnt);
}

char	*ft_convert_base2(char *base_to, unsigned int result, int sign)
{
	int		i;
	int		cnt;
	char	*arr;
	int		to_len;

	to_len = ft_strlen(base_to);
	cnt = ft_count_result(result, to_len, sign);
	arr = (char *)malloc(sizeof(char) * (cnt + 1));
	if (arr == NULL)
		return (0);
	i = 0;
	if (sign == -1)
		arr[i++] = '-';
	while (i < cnt)
	{
		if (sign == -1)
			arr[cnt - i] = base_to[result % to_len];
		else
			arr[cnt - i - 1] = base_to[result % to_len];
		result /= to_len;
		i++;
	}
	arr[cnt] = '\0';
	return (arr);
}
