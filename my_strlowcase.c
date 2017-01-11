/*
** my_strlowcase.c for my_strlowcase.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 10:28:46 2017 Kiwi
** Last update Wed Jan 11 14:50:02 2017 Kiwi
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  str[i] = str[i] + 32;
	}
      i++;
    }
  return (str);
}
