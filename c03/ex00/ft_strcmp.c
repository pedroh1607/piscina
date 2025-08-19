/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:36:18 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/14 10:36:20 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (i <= s1[i] || i <= s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{	
	char c[] = {"AB"};
	char v[] = {"ABC"};
	//(void)c;
	ft_strcmp(c, v);
	printf("%d", ft_strcmp(c,v));	
	//ft_strcmp(argv[1], argv[2]));
	
}*/
