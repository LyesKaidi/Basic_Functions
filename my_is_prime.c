/*
** my_is_prime.c for my_is_prime.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 14:33:26 2017 Kiwi
** Last update Mon Jan  2 15:03:58 2017 Kiwi
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb < 2)
    return (0);
  if (nb == 2)
    return (1);
  while (i < nb)
    {
      if (nb % i == 0)
	return (0);
      i++;
    }
  return (1);
}
