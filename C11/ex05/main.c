/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:43:15 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 21:34:07 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "operator.h"
#include "ft_atoi.h"

void	ft_print_result(int result)
{
	char	c;

	if (result == -2147483648)
	{
		ft_print_result(result / 10);
		write(1, "8", 1);
		return ;
	}
	else if (result < 0)
	{
		write(1, "-", 1);
		ft_print_result(-result);
		return ;
	}
	else if (result > 9)
		ft_print_result(result / 10);
	c = result % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	void	(*fp[5])(int, int);

	if (argc != 4)
		return (0);
	fp[0] = &add;
	fp[1] = &sub;
	fp[2] = &mul;
	fp[3] = &div;
	fp[4] = &mod;
	if (*argv[2] == '+')
		fp[0](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == '-')
		fp[1](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == '*')
		fp[2](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == '/')
		fp[3](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == '%')
		fp[4](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		write(1, "0\n", 2);
	return (0);
}
