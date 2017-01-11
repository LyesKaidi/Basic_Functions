/*
** my_str_isupper.c for my_str_isupper.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 10:00:46 2017 Kiwi
** Last update Tue Jan  3 10:04:26 2017 Kiwi
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  if (!str)
    {
      return (1);
    }
  while (str[i])
    {
      if (str[i] => 'A' && str[i] <= 'Z')
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
