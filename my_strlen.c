/*
** my_strlen.c for my_strlen.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Thu Dec 29 15:37:24 2016 Kiwi
** Last update Wed Jan 11 14:49:43 2017 Kiwi
*/

int	my_strlen(char *str)
{
  int	len;

  len = 0;
  while (str[len] != '\0')
    {
      len++;
    }
  return (len);
}
