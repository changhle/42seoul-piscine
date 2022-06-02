/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:33:46 by changhle          #+#    #+#             */
/*   Updated: 2021/09/27 21:34:45 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_result.h"

void	add(int a, int b)
{
	ft_print_result(a + b);
	write(1, "\n", 1);
}

void	sub(int a, int b)
{
	ft_print_result(a - b);
	write(1, "\n", 1);
}

void	mul(int a, int b)
{
	ft_print_result(a * b);
	write(1, "\n", 1);
}

void	div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	ft_print_result(a / b);
	write(1, "\n", 1);
}

void	mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	ft_print_result(a % b);
	write(1, "\n", 1);
}
