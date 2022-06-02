/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 00:39:31 by changhle          #+#    #+#             */
/*   Updated: 2021/09/28 12:48:46 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base2(char *base_to, unsigned int result, int sign);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' || c == '\v'
		|| c == '\n' || c == '\f')
		return (1);
	return (0);
}

int	is_base_from(char c, char *base_from)
{
	int	i;
	int	to_len;

	i = 0;
	to_len = ft_strlen(base_from);
	while (i < to_len)
	{
		if (c == base_from[i])
			return (i);
		i++;
	}
	return (-1);
}

int	is_base_check(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) <= 1)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || is_space(str[i]))
			return (1);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				sign;
	unsigned int	result;

	sign = 1;
	result = 0;
	if (is_base_check(base_from) || is_base_check(base_to))
		return (0);
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (is_base_from(*nbr, base_from) != -1)
	{
		result = result * ft_strlen(base_from) + is_base_from(*nbr, base_from);
		nbr++;
	}
	if (result == 0)
		sign = 1;
	return (ft_convert_base2(base_to, result, sign));
}
