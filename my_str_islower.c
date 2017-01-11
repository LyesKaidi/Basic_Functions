/*
** my_str_islower.c for my_str_islower.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 09:54:42 2017 Kiwi
** Last update Tue Jan  3 09:59:50 2017 Kiwi
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  if (!str)
    {
      return (1);
    }
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
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
