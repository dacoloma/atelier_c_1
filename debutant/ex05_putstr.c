/*
- Créer une fonction qui prend en paramètre une chaine de caractère et qui l'affiche
sur la sortie standard.

Aide : char *
*/
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		ft_putchar(str[i]);
		i++;
	}
} //Prototype de fonction

int main(void)
{
	ft_putstr("Hello world !");
	ft_putchar('\n');
	return(0);
}
