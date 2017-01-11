/*
** my_square_root.c for my_square_root.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 14:16:03 2017 Kiwi
** Last update Wed Jan 11 14:46:09 2017 Kiwi
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  if (nb >= 0)
    {
      if (nb == 1)
	return (1);
      while (i <= nb)
	{
	  if (i * i == nb)
	    return (i);
	  i++;
	}
      return (0);
    }
  return (0);
}
