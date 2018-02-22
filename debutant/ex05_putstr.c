/*
- Créer une fonction qui prend en paramètre une chaine de caractère et qui l'affiche 
sur la sortie standard.

Aide : char *
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str); //Prototype de fonction