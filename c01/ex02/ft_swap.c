/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:33:45 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/06 17:35:49 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 23;
	ft_swap(&a, &b);
	printf("valor_de_a = %i \nvalor_de_b = %i", a, b);
}
*/
