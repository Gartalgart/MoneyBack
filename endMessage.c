#include "endMessage.h"

void endMessage(int *bill20, int *bill10, int *bill5, int *coin2, int *coin1)
{
    printf("___ARGENT RENDU___\n");
	if (*bill20 > 0)
		printf("Billet(s) de 20 euros rendu: %d\n", *bill20);
	if (*bill10 > 0)
		printf("Billet(s) de 10 euros rendu: %d\n", *bill10);
	if (*bill5 > 0)
		printf("Billet(s) de 5 euros rendu:  %d\n", *bill5);
	if (*coin2 > 0)
		printf("Piece(s) de 2 euros rendu:   %d\n", *coin2);
	if (*coin1 > 0)
		printf("Piece de 1 euros rendu:      %d\n", *coin1);
}