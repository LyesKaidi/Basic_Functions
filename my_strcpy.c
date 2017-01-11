/*
** my_strcpy.c for my_strcpy.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 15:57:36 2017 Kiwi
** Last update Wed Jan 11 14:47:43 2017 Kiwi
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] != '\0';
  return (dest);
}
