/*
** my_strncmp.c for my_strncmp.c in /home/kiwi/my_lib
** 
** Made by Kiwi
** Login   <lyes.kaidi@epitech.eu>
** 
** Started on  Tue Jan  3 09:28:45 2017 Kiwi
** Last update Tue Jan  3 09:43:33 2017 Kiwi
*/

int	my_strncmp(char *s1, char *s2, int n)
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
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
    {
      i++;
    }
  if (i == n)
    {
      return (0);
    }
  else
    {
      return (s1[i] - s2[i]);
    }
}

int	main()
{
  char	*a;
  char	*b;
  int	n;

  a = "kiwideffe";
  b = "poutsi";
  n = 2;
  printf("%d\n", my_strncmp(a, b, n));
  printf("\n");
  printf("%d\n", my_strncmp(b, a, n));
  printf("\n");
  return (0);
}
