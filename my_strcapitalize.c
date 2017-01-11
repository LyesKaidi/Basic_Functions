/*
** my_strcapitalize.c for my_strcapitalize.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 10:37:33 2017 Kiwi
** Last update Wed Jan 11 14:46:34 2017 Kiwi
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  if (str[i - 1] != 32)
	    {
	      str[i] =  str[i] + 32;
	    }
	}
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if (str[i - 1] == 32)
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
  if (str[0] >= 'a' && str[0] <= 'z')
    {
      str[0] = str[0] - 32;
    }
  return (str);
}
