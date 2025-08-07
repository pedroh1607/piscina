/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:50:30 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/06 15:00:30 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void  ft_ultimate_div_mod(int *a, int *b)
{
  int c;
  int d;

  c = *a / *b;
  d = *a % *b;
  *a = c;
  *b = d;  
}
int	main()
{
  int a;
  int b;
  
  ft_ultimate_div_mod(10, 3);
  printf("a: %d\nb: %d", a, b);
  return 0;
}
	