/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 08:45:07 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/11 08:45:11 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = size - 1;
	while (i >= '\0')
	{
//		printf("%d", tab[i]);
		i--;
	}
}
/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(array, array[8]);
}
*/
