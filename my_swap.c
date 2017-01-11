/*
** my_swap.c for my_swap.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Thu Dec 29 14:58:15 2016 Kiwi
** Last update Wed Jan 11 14:51:55 2017 Kiwi
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (0);
}
