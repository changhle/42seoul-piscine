/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:33:37 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 18:18:01 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return (1);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	tab_len;

	tab_len = 0;
	while (tab[tab_len])
		tab_len++;
	i = 0;
	while (i < tab_len - 1)
	{
		j = 0;
		while (j < tab_len - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) == 1)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
