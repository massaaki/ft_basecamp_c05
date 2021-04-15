/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:13:18 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/14 17:22:30 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	temp = power;
	while (temp--)
	{
		result *= nb;
	}
	return (result);
}
