/*
- Créer une fonction qui renvoie la taille de la chaine de caractère passé en paramètre.

Aide : N'hesite pas a utiliser les index pour circuler dans ta chaine (str[0])
*/
#include <stdio.h>

int		ft_strlen(char *str)
{
  int i=0;
  while(str[i]!='\0')
  {
    i++;
  }
  return i;
}

int		main(void) // main de test
{

  int x;
  x = ft_strlen("hello world");
  printf("Longueur : %d", x);

	return (0);
}
