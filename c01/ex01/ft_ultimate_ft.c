/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleiton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:12:32 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/04 14:36:13 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{	
	int x = 0;

	int *nbr1 = &x;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	
	
	ft_ultimate_ft(&nbr8);

	printf("%d", x);

	return 0;
}



