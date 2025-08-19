/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:44:10 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/13 09:40:14 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{			
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{

	char	src[]={"cleiton"};
	char	src1[]={"c/e1t0n"};
	char	src2[]={"1234567"};
	char	src3[]={"CLEITON"};
	printf("%d\n%d\n%d\n%d\n",ft_str_is_lowercase(src),
	ft_str_is_lowercase(src1),ft_str_is_lowercase(src2),
	ft_str_is_lowercase(src3));	
}
*/
