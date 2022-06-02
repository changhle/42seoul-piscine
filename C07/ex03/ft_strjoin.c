/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:03:43 by changhle          #+#    #+#             */
/*   Updated: 2021/09/29 16:29:35 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_ultimate_len(int size, char **strs, char *sep)
{
	int	i;
	int	ult_len;

	i = 0;
	ult_len = 0;
	while (i < size)
	{
		ult_len += ft_strlen(strs[i]);
		ult_len += ft_strlen(sep);
		i++;
	}
	ult_len -= ft_strlen(sep);
	return (ult_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*arr;
	char	*arr_start;

	if (size <= 0)
		return ((char *)malloc(0));
	arr = (char *)malloc(sizeof(char) * (ft_ultimate_len(size, strs, sep) + 1));
	if (arr == NULL)
		return (arr);
	i = 0;
	arr_start = arr;
	while (i < size)
	{
		ft_strcpy(arr, strs[i]);
		arr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(arr, sep);
			arr += ft_strlen(sep);
		}
		i++;
	}
	return (arr_start);
}
