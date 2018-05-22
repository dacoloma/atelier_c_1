/*
- Créer une fonction qui reçoit un chaine de caractère en paramètre, elle lui donnera comme valeur
le prochain caractère alphabétique. La fonction renverra la chaine de caractère.

Exemple : "abc" devient "bcd"
		: "zab" devient "abc"
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_each_char(char *str)
{
  char c[10];
  char *newstr;
  int i=0;

	while(str[i]!='\0')
	{
    c[i]=str[i]+1;
		i++;
	}
  c[i]='\0';
  newstr = c;
  //printf("In the function :\n");
  //printf("%s\n", newstr);
  return newstr;
}

int main(void)
{
  char *pointeur="aecd";
  char *ptr;
  char c[10];
  int i=0;
  printf("%s\n", pointeur);
  printf("-------------\n");

  while(pointeur[i]!='\0')
	{
    c[i] = pointeur[i]+1;
		i++;
	}
  c[i] = '\0';
  ptr = c;
  printf("%s\n", ptr);

  printf("========\n");
  ptr = ft_each_char("abcd");
  printf("%s\n", ptr);


  return(0);
}
