/*
- Créer une fonction qui prend en parametre deux pointeurs sur entier et qui echangent leurs
adresses.
*/

#include <stdio.h>

void	ft_swap(int *a, int *b) // Prototype de fonction
{
	int c=*a;

	*a=*b;
	*b=c;
	//printf("%s%d\n", "a = ", a);

}

int		main(void) // main de test
{
	int		a;
	int		b;

	a = 10;
	b = 5;
	ft_swap(&a, &b);
	printf("%s%d\n", "a = ", a);
	printf("%s%d", "b = ", b);
	printf("\n");
	// Apres cet appel de fonction normalement a doit etre egal à 5 et b doit etre egal à 10.
	return (0);
}
