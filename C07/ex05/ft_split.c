/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:12:20 by changhle          #+#    #+#             */
/*   Updated: 2021/09/29 14:24:54 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	word;
	int	cnt;

	cnt = 0;
	word = 0;
	while (1)
	{
		if (!is_charset(*str, charset) && word == 0)
		{
			word = 1;
			cnt++;
		}
		else if ((is_charset(*str, charset) || *str == '\0') && word == 1)
			word = 0;
		if (*str == '\0')
			break ;
		str++;
	}
	return (cnt);
}

char	*ft_strdup(int size, char *word_start)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == NULL)
		return (word);
	while (i < size)
	{
		word[i] = *word_start;
		word_start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	fill_word(char **arr, char *str, char *charset)
{
	int		i;
	int		word;
	char	*word_start;

	word_start = str;
	i = 0;
	word = 0;
	while (1)
	{
		if (!is_charset(*str, charset) && word == 0)
		{
			word = 1;
			word_start = str;
		}
		else if ((is_charset(*str, charset) || *str == '\0') && word == 1)
		{
			word = 0;
			arr[i] = ft_strdup(str - word_start, word_start);
			i++;
		}
		if (*str == '\0')
			break ;
		str++;
	}
	arr[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (arr == NULL)
		return (arr);
	fill_word(arr, str, charset);
	return (arr);
}
