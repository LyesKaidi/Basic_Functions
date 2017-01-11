/*
** my_str_isprintable.c for my_str_isprintable.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 10:05:05 2017 Kiwi
** Last update Tue Jan  3 10:12:24 2017 Kiwi
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  if (!str)
    {
      return (1);
    }
  while (str[i])
    {
      if (str[i] >= 32 && str[i] <= 126)
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
