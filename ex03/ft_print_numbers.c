/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:21:06 by iboukhss          #+#    #+#             */
/*   Updated: 2023/11/27 13:24:07 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nbr;
	nbr = '0';

	while (nbr <= '9')
	{
		write(1, &nbr, 1);
		++nbr;
	}
}

int	main(void)
{
	ft_print_numbers();
}
