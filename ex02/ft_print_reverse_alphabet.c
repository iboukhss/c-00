/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:17:04 by iboukhss          #+#    #+#             */
/*   Updated: 2023/11/27 13:18:56 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ltr;
	ltr = 'z';

	while(ltr >= 'a')
	{
		write(1, &ltr, 1);
		--ltr;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
