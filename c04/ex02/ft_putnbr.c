/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:37:34 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/18 16:12:42 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	write(1, &nb, 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	ft_putnbr(&argv[1]);
}
