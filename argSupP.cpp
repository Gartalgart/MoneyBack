#include <stdio.h>
#include <stdlib.h>
#include "argSupP.h"

void argentDonnerSupPrix(int* argentDonner, int* prix)
{
	int resultat = *argentDonner - *prix;
	int b20 = 0, b10 = 0, b5 = 0, c2 = 0, c1 = 0;

	b20 = resultat / 20;
	resultat %= 20;
	b10 = resultat / 10;
	resultat %= 10;
	b5 = resultat / 5;
	resultat %= 5;

	c2 = resultat / 2;
	resultat %= 2;
	c1 = resultat / 1;
	resultat %= 1;

	printf("___ARGENT RENDU___\n");

	if (b20 > 0)
		printf("Billet(s)  de 20 euros rendu: %d\n", b20);
	if (b10 > 0)
		printf("Billet(s)  de 10 euros rendu: %d\n", b10);
	if (b5 > 0)
		printf("Billet(s)  de 5 euros rendu: %d\n", b5);
	if (c2 > 0)
		printf("Piece(s)  de 2 euros rendu: %d\n", c2);
	if (c1 > 0)
		printf("Piece  d'1 euros rendu: %d\n", c1);

}

