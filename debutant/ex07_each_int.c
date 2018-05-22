/*
- Créer une fonction qui prend en paramètre un tableau d'int (int *), et qui pour chaque
valeur applique une operation au choix. La fonction renverra le tableau.

Exemple : {10, 5, 2, 0} appliqué à une fonction multipliant par 2 donnera {20, 10, 4, 0}
*/
#include <unistd.h>
#include <stdio.h>

int	*ft_each_int(int *tab)
{
  int taille = sizeof(tab)/sizeof(tab[0]);
  for(int i=0;i<taille;i++)
  {
    tab[i] = tab[i]*2;
  }

  return tab;
}


int main(void)
{
  int taille = 4;
  int tab[4]={10, 5, 2, 0};
  int *newtab;

  printf("Tab init:\n");
  for(int i=0;i<taille;i++)
  {
    printf("%d ", *(tab+i));

  }
  //int k =sizeof(tab)/sizeof(tab[0]);
  //printf("\nSize tab : %d",k);
  printf("\n");

  printf("New tab:\n");
  newtab = ft_each_int(tab);
  printf("%d ", newtab[2]);

  printf("\n");

  return(0);
}
