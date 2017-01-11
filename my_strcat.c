/*
** my_strcat.c for my_strcat.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 13:32:57 2017 Kiwi
** Last update Wed Jan 11 14:46:59 2017 Kiwi
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i])
    {
      dest[i + j] = src[i];
      i++;
    }
  dest[i + j] = '\0';
  return (dest);
}
