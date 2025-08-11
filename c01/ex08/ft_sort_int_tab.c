//#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {
  int i;
  int tmp;
  int swapped;

  swapped = 1;
  // Loop until no swaps are needed
  while (swapped)
    {
    swapped = 0;
    i = 0;
    // Iterate through the array
    while (i < size - 1)
    {
      if (tab[i] > tab[i + 1])
      {
        // Swap the elements
        tmp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = tmp;
        swapped = 1;
      }
      i++;
    }
  }
}


/*
int main(void)
{
  int array[] = {42, 7, 13, 99, 1, 23, 56, 8};
  int size = sizeof(array) / sizeof(array[0]);
  int i;

  ft_sort_int_tab(array, size);
  i = 0;
  while (i < size)
  {
    printf("%d,", array[i]);
    i++;
  }
}
*/