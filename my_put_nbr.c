/*
** my_put_nbr.c for my_put_nbr.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Wed Dec 21 11:23:45 2016 Kiwi
** Last update Wed Jan 11 14:43:49 2017 Kiwi
*/

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  my_putchar('2');
	  nb = 147483648;
	}
      else
	{
	  nb *= -1;
	}
    }
  if (nb >= 0 && nb <= 9)
    my_putchar((nb % 10) + '0');
  else
    {
      my_put_nbr(nb / 10);
      my_putchar((nb % 10) + '0');
    } 
  return (0);
}
