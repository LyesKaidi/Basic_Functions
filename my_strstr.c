/*
** my_strstr.c for my_strstr.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 18:06:34 2017 Kiwi
** Last update Wed Jan 11 14:51:09 2017 Kiwi
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  while (str[i])
    {
      j = 0;
      while (to_find[j] == str[j + i])
	{
	  if (to_find[j + 1] == '\0')
	    {
	      return (str + i);
	    }
	  j++;
	}
     i++;
    }
  return (0);
}
