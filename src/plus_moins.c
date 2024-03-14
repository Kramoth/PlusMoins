#include<stdio.h>

void plus_moins(int choix_joueur, int valeur_a_trouver){

	if(choix_joueur<valeur_a_trouver)
		printf("C'est plus !\n");
	else if (choix_joueur>valeur_a_trouver)
		printf("C'est moins !\n");
	else
		printf("bingo\n");
}

int main()
{
	int guess=42;
	int choix_joueur;
	printf("Devinez un nombre entre 0 et 100:\n");
	scanf("%d",&choix_joueur);
	plus_moins(choix_joueur, guess);
}