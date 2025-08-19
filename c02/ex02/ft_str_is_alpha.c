/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:20:31 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/12 09:20:34 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || 
			(str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{

	char	src[]  = {"clEitON"};
	char	src1[] = {"c/e1t0n"};
	char	src2[] = {"cle1ton"};
	char	src3[] = {""};
	printf("%d\n%d\n%d\n%d\n",ft_str_is_alpha (src), ft_str_is_alpha(src1),ft_str_is_alpha (src2), ft_str_is_alpha(src3));
	
}
*/
