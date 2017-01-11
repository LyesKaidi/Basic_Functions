/*
** my_strcmp.c for my_strcmp.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Mon Jan  2 19:00:05 2017 Kiwi
** Last update Mon Jan  2 19:12:44 2017 Kiwi
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (my_strlen(s1) < my_strlen(s2))
    {
      return (-1);
    }
  if (my_strlen(s1) > my_strlen(s2))
    {
      return (1);
    }
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
      i++;
    }
  return (s1[i] - s2[i]);
}

int	main()
{
  char	*a;
  char	*b;

  a = "abcdefg";
  b = "abcde";
  printf("%d\n", my_strcmp(a, b));
  printf("\n");
  printf("%d\n", my_strcmp(b, a));
  printf("\n");
  printf("%d\n", my_strcmp(a, a));
  printf("\n");
  printf("%d\n", my_strcmp(b, b));
  printf("\n");
  return (0);
}
