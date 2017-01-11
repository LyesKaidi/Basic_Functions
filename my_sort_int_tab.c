/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 12:06:40 2017 Kiwi
** Last update Wed Jan 11 14:45:51 2017 Kiwi
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  while (i < size)
    {
      j = 0;
      while (j < size - 1)
	{
	  if (tab[j] < tab[j + 1])
	    {
	      tmp = tab[j];
	      tab[j] = tab[j + 1];
	      tab[j + 1] = tmp;
	    }
	  j++;
	}
      i++;
    }
}
