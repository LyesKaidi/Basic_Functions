/*
** my_str_isalpha.c for my_str_isalpha.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 09:45:29 2017 Kiwi
** Last update Wed Jan 11 14:48:38 2017 Kiwi
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  if (!str)
    {
      return (1);
    }
  while (str[i])
    {
      if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
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
