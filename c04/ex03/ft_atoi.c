/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:29:32 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/19 10:03:08 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_atoi(char *str)
{
	int	i;
	int str_int;
	//char str1;
	
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] >= 'Z'))
		{
			//str1 = str[i];
			i++; 
		}
			str_int	= str[i] - '0';
			str_int /= 10;
		i++;
	}
	return (str_int);
}

int main(int c, char *v[])
{
	if (c != 2)
		return (0);
	printf("%d", ft_atoi(v[1]));
	return (0);
}
