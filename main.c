#include <stdio.h>
#include <stdlib.h>
#include "argSupP.h"
#include "argInfP.h"
#include "init.h"

int main()
{
	int price; 
	int giveMoney; 
	int result, 
	int again;
	again = 1;
	while (again == 1)
	{
		init(&giveMoney, &price)
		if(init == 1 )// Continuer si variable entrer est un entier.
		{
			if (giveMoney > price)
				argentDonnerSupPrix(&giveMoney, &price);
			else if (giveMoney < price)
				argentDonnerInfPrix(&giveMoney, &price);
			else
				printf("Vous avez donner la bonne somme d'argent,  merci beaucoup !\n\n");
		}
		else
		printf("Tu dois entrer un nombre entier.\n");
		printf("Voullez-vous continuer ? Tapez sur 1 pour oui.\n");
		scanf("%d", &again);
		while (getchar() != '\n');
	}
	return 0;
}