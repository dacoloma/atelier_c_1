/*
- Créer une fonction qui prend en paramètre un entier et qui écrit 'N' si l'entier est négatif,
et 'P' si l'entier est supérieur ou égal à zéro.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)//Prototype de fonction
{
	if (n<0)
	{
		ft_putchar('N');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('P');
	}
}

int main(void)
{
	ft_is_negative(3);
	ft_is_negative(-2);
	return(0);
}
