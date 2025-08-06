/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:12:32 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/06 12:29:46 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{	
	int	x;

	int	*nbr1;

	int	**nbr2;

	int	***nbr3;

	int	****nbr4;

	int	*****nbr5;

	int	******nbr6;

	int	*******nbr7;

	int	********nbr8;
	
	x = 0;
	nbr1 = &x;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	ft_ultimate_ft(&nbr8);

	printf("%d", x);

	return 0;
}


