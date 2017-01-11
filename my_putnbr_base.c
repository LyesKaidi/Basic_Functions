/*
** my_put_nbr_base.c for my_putnbr_base.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 13:42:59 2017 Kiwi
** Last update Wed Jan 11 14:43:27 2017 Kiwi
*/

int	my_putnbr_base(int nbr, char *base)
{
  int	len;

  len = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * (-1);
    }
  if (nbr >= len)
    {
      my_putnbr_base(nbr / len, base);
      my_putnbr_base(nbr % len, base);
    }
  else
    {
      my_putchar(base[nbr]);
    }
}
