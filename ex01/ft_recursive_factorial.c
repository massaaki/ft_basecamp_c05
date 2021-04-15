/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:51:09 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/15 00:53:54 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int fatorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		fatorial = nb * ft_recursive_factorial(nb - 1);
	return (fatorial);
}
