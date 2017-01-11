/*
** my_strupcase.c for my_strupcase.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 10:13:35 2017 Kiwi
** Last update Wed Jan 11 14:51:31 2017 Kiwi
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
