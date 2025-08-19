/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:46:48 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/15 11:46:51 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (i == nb)
		return (0);
	return (dest);
}
/*
int	main();//int argc, char argv[])
{	
	//(void)argc;
	char	c[] = {"ABCDE"};
	char	v[] = {"ABCd"};
	int	e = 2;

	printf("%s", ft_strncat(c, v, e));
	//printf("%s",ft_strncat('0','0',0));
	
}*/
