/* 
- Créer une fonction qui prend en paramètre un tableau d'entier et qui le trie par ordre croissant.

Exemple {10, 2, 1, 1, 5, 20} devient {1, 1, 5, 10, 20}
Aide : Tri à bulle
*/

#include <stdio.h>

void	ft_display_array(int *array)
{
	while(*array)
	{
		printf("%d\n", *array);
		array++;
	}
}