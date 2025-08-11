/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:50:30 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/06 15:00:30 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %i\nb: %i", a, b);
}
*/	
