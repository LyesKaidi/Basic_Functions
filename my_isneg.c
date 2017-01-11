/*
** my_isneg.c for my_isneg.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Wed Dec 21 11:20:48 2016 Kiwi
** Last update Thu Dec 29 12:46:30 2016 Kiwi
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}
