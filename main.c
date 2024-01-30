#include "init.h"
#include "givMoSupP.h"
#include "givMoInfP.h"

int main()
{
	int price; 
	int giveMoney; 
	int again = 1;
	while (again == 1)
	{
		init(&giveMoney, &price);
		if (giveMoney > price)
			giveMoneySupPrice(&giveMoney, &price);
		else if (giveMoney < price)
			giveMoneyInfPrice(&giveMoney, &price);
		else
		{
		printf("Tu dois entrer un nombre entier.\n");
		}
		printf("Voullez-vous continuer ? Tapez sur 1 pour oui.\n");
		scanf("%d", &again);
		while (getchar() != '\n');
	}
	return 0;
}