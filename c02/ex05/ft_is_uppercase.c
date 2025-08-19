/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:44:10 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/13 09:54:17 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{			
			return (0);
		}
		i++;
	}
	return (1);
}
/*
//#include <stdio.h>
int	main(int argc, char *argv[])
{

	(void)argc; 
	printf("%d",ft_str_is_yppercase(argv[1]));


//	char	src[]={"cleiton"};
//	char	src1[]={"c/e1t0n"};
//	char	src2[]={"1234567"};
//	char	src3[]={"CLEITON"};
//	printf("%d\n%d\n%d\n%d\n",ft_str_is_lowercase(src),ft_str_is_lowercase(src1),
//	ft_str_is_lowercase(src2),ft_str_is_lowercase(src3));	

}
*/
