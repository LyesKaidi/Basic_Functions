/*
** my_putstr.c for my_putstr.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Thu Dec 29 15:28:55 2016 Kiwi
** Last update Wed Jan 11 14:44:08 2017 Kiwi
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
