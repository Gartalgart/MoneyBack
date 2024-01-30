#include "init.h"

void init(int *giveMoney, int *price)
{
    printf("Indique le prix d'un objet:");
	int retval = scanf("%d", price);
	while (getchar() != '\n');
	if (retval == 1)
	printf("Le nombre choisi est %d\n", *price);
    else
	{
	printf("Erreur: Vous n'avez pas entrer un entier.\n");
	exit(EXIT_FAILURE);
	}
	printf("Maintenant indique l'argent que tu me donnes:");
	int retval2 = scanf("%d", giveMoney);
	while (getchar() != '\n');
	if (retval2 == 1)
	printf("Le nombre choisi est %d\n", *giveMoney);
    else
	{
	printf("Erreur: Vous n'avez pas entrer un entier.\n");
	exit(EXIT_FAILURE);
	}
}