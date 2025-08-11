/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:44:10 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/11 15:44:13 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int i;
	int x;
	
	i = 0;
	x = 1;
	while(str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 9)
		{
			return ('x');
			printf("0");
		}
		else
		{
			return (x);
			printf("cle");
		}
		i++;
	}
	return 0;
}

int	main(void)
{
	char	src[]= {1,2,3,4,5,6};

	
	ft_str_is_numeric(src);
	return 0;
}
