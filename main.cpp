#include <stdio.h>
#include <stdlib.h>
#include "argSupP.h"
#include "argInfP.h"

int main()
{
	int prix = 0, argentDonner = 0, resultat = 0, continuer = 0;
	int b20 = 0, b10 = 0, b5 = 0, c2 = 0, c1 = 0;

	do
	{
		printf("Indique le prix d'un objet:\n");
		scanf_s("%d", &prix);
		while (getchar() != '\n');
		printf("%d\n", prix);

		printf("Maintenant indique l'argent que tu me donne:");
		scanf_s("%d", &argentDonner);
		while (getchar() != '\n');
		printf("%d\n", argentDonner);


			if (argentDonner > prix)
			{
				argentDonnerSupPrix(&argentDonner, &prix);
			}
			else if (argentDonner < prix)
			{
				argentDonnerInfPrix(&argentDonner, &prix);
			}
			else
			{
				printf("Vous avez donner la bonne somme d'argent,  merci beaucoup !\n\n");
			}
		

		printf("Voullez-vous continuer ? Tapez sur 1 pour oui.\n");
		scanf_s("%d", &continuer);
		while (getchar() != '\n');

	} while (continuer == 1);
	

	return 0;
}













/*int main()
{
	int nb = 0;

	do
	{
		printf("Ecrie un nombre entier:");
		scanf_s("%d", &nb);
		while (getchar() != '\n');
		printf("\n");

		printf("Ton nombre %d, sa forme octal est %o et sa forme hexa est %x.\n", nb, nb, nb);
	}while (nb != 0);

	return 0;
}
*/