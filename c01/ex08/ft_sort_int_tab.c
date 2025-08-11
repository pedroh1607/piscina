/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 08:50:09 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/11 08:50:12 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}

/*
int	main(void)
{
	int	array[];
	int	size;
	int	i;

	array[] = {42, 7, 13, 99, 1, 23, 56, 8};
	size = sizeof(array) / sizeof(array[0]);
	ft_sort_int_tab(array, size);
	i = 0;
	while (i < size)
	{
		printf("%d,", array[i]);
		i++;
	}
}
*/
