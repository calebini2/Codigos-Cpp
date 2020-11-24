#include <stdio.h>
#include <iostream>
#define nume 10
int main()
{
	float calif[nume];
	int iconta;
	float maxima;

	for (iconta = 0; iconta < nume; iconta++) {
		printf("Calificacion: ");
		scanf_s("%f", &calif[iconta]);
	}
	
	for (iconta = 0, maxima = calif[0]; iconta < nume; iconta++) {
		if (calif[iconta] > maxima) {
			maxima = calif[iconta];
		}
	}

	printf("El valor mas grande es %f", maxima);
}