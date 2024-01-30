#include <stdio.h>
#include <stdlib.h>
#include "argSupP.h"
#include "endMessage.h"

void argentDonnerSupPrix(int* giveMoney, int* price)
{
	int result = *giveMoney - *price;
	int bill20;
	int bill10;
	int bill5;
	int coin2;
	int coin1;
	bill20 = result / 20;
	result %= 20;
	bill10 = result / 10;
	result %= 10;
	bill5 = result / 5;
	result %= 5;
	coin2 = result / 2;
	result %= 2;
	coin1 = result / 1;
	result %= 1;
	endMessage(&bill20, &bill10, &bill5, &coin2, &coin1);
}

