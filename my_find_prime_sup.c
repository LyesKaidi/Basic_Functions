/*
** my_find_prime_sup.c for my_find_prime_sup.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 14:54:15 2017 Kiwi
** Last update Wed Jan 11 14:42:23 2017 Kiwi
*/

int	my_find_prime_sup(int nb)
{
  int	i;

  i = 2;
  if (nb <= 2)
    return (1);
  if (nb % i == 0)
      nb++;
  while (!my_is_prime(nb))
    {
      nb = nb + 1;
    }
  return (nb);
}
