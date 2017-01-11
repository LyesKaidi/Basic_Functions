/*
** my_getnbr.c for my_getnbr.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 09:52:37 2017 Kiwi
** Last update Wed Jan 11 14:42:39 2017 Kiwi
*/

int	my_getnbr(char *str)
{
  int	i;
  int	result;
  int	continu;

  i = 0;
  result = 0;
  continu = 1;
  if (str[i] == '-' || str[i] == '+')
    i++;
  while (str[i] && continu)
    {
      if (str[i] >= '0' && str[i] <= '9')
	result = result * 10 + (str[i] - '0');
      else
	continu = 0;
      i++;
    }
  if (str[0] == '-')
    result *= -1;
  return (result);
}
