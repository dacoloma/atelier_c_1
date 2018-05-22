/*
- Créer un programme qui affiche l'alphabet dans l'ordre croissant sur la meme ligne puis en dessous
qui affiche les numéros de 0 à 9 sur la meme ligne sur la sortie standard.
Aide : man ascii est ton ami !
	 : boucle while
	 : /!\ Il est demandé de faire un programme tu vas donc devoir faire un main !
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alphabet(void)
{
	char n;
	n=97;
	while(n<=122)
	{
		ft_putchar(n);
		n++;
	}
}

void	ft_number(void)
{
	char n;
	n=48;
	while(n<=57)
	{
		ft_putchar(n);
		n++;
	}
}

int main(void)
{
	//ft_alphabet();
	//ft_number();
	ft_alphabet();
	ft_number();
	return(0);
}
