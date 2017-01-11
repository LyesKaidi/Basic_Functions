/*
** my_revstr.c for my_revstr.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 17:45:10 2017 Kiwi
** Last update Wed Jan 11 14:45:12 2017 Kiwi
*/

char	*my_revstr(char *str)
{
  char	*start;
  char	*end;
  char	temp;

  start = str;
  end = start + strlen(str) - 1;
  if (!str)
    return (NULL);
  while (start < end)
    {
      temp = *start;
      *start = *end;
      *end = temp;
      start++;
      end--;
    }
  return (str);
}
