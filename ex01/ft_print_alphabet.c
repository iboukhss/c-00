/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:12:11 by iboukhss          #+#    #+#             */
/*   Updated: 2023/11/27 13:16:18 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ltr;

	ltr = 'a';
	while (ltr <= 'z')
	{
		write(1, &ltr, 1);
		++ltr;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
