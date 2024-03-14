#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void plus_moins(int choix_joueur, int valeur_a_trouver){

	if(choix_joueur<valeur_a_trouver)
		printf("C'est plus !\n");
	else if (choix_joueur>valeur_a_trouver)
		printf("C'est moins !\n");
	else
		printf("bingo\n");
}

int generate_guess(){
	srand(time(NULL));
	return rand()%101;
}

int main()
{


	int guess=generate_guess();
	printf("%d\n",guess);
	int choix_joueur;
	printf("Devinez un nombre entre 0 et 100:\n");
	scanf("%d",&choix_joueur);
	plus_moins(choix_joueur, guess);
}