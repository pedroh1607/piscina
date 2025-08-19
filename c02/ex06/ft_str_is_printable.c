/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:44:10 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/19 11:20:46 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{	
			return (0);
		}
			i++;		
	}
	return (1);
}

#include <stdio.h>
int	main()//int argc, char *argv[])
{

//(void)argc; 
//printf("%d",ft_str_is_printable(argv[1]));


	char	src[]={"cleiton"};
	char	src1[]={"c/e1t0n"};
	char	src2[]={""};
	char	src3[]={"CLEIT0N"};
	char	src4[]={"\a"};
	printf("%d\n%d\n%d\n%d\n%d",ft_str_is_printable(src),ft_str_is_printable(src1),
	ft_str_is_printable(src2),ft_str_is_printable(src3),ft_str_is_printable(src4));	
}
