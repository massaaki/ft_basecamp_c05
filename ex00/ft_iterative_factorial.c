/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:25:26 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/15 00:53:16 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int num;
	int result;

	if (nb < 0)
		return (0);
	num = nb;
	result = 1;
	while (num > 1)
	{
		result *= num;
		num--;
	}
	return (result);
}
