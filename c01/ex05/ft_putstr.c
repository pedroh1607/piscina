/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandrade <pandrade@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:53:43 by pandrade          #+#    #+#             */
/*   Updated: 2025/08/05 16:15:27 by pandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
}
int main(void) 
{ 
  ft_putstr("Hello World!"); 
}
//trocar os espaços por tab