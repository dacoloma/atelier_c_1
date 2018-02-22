/*
- Créer une fonction qui prend en paramètre un entier et qui écrit 'N' si l'entier est négatif, 
et 'P' si l'entier est supérieur ou égal à zéro.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n); //Prototype de fonction