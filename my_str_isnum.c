/*
** my_str_isnum.c for my_str_isnum.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 09:51:07 2017 Kiwi
** Last update Tue Jan  3 09:54:06 2017 Kiwi
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (!str)
    {
      return (1);
    }
  while (str[i])
    {
      if ((str[i] >= '0' && str[i] <= '9'))
	{
	  i++;
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}
