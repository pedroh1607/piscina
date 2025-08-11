/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:11:11 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/06 16:13:48 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}
/*
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(5, 2, &mod, &div);
	printf("mod = %d \ndiv = %d", mod, div);
}
*/
