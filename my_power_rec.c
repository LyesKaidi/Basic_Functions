/*
** my_power_rec.c for my_power_rec.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 13:58:33 2017 Kiwi
** Last update Wed Jan 11 14:43:05 2017 Kiwi
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  return (nb * my_power_rec(nb, power - 1));
}
