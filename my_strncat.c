/*
** my_strncat.c for my_strncat.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 14:36:24 2017 Kiwi
** Last update Wed Jan 11 14:47:22 2017 Kiwi
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	len;
  int	i;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0' && i < nb)
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}
