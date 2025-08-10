//#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
  int i;

  i = size - 1;
  while (i >= '\0') 
  {
    printf("%d", tab[i]);
    tab[i];
    i--;
  }
}

int main(void) 
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  ft_rev_int_tab(array, array[8]);
}