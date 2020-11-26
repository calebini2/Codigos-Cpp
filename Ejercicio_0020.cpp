#include <stdio.h>
#include <iostream>
#define numele 5
#define verdadero 1
#define falso 0
int main()
{
	int arr[numele];
	int inum;
	int apuntador;
	int aux;
	int hayIntercambio;

	for (apuntador = 0; apuntador < numele; apuntador++) {
		printf("Dato %i: ", apuntador + 1);
		scanf_s("%i", &arr[apuntador]);
	}
	hayIntercambio = verdadero;
	for (inum = 0; inum < numele - 1; inum++) {
		hayIntercambio = falso;
		for (apuntador = 0; apuntador < numele - 1&& !hayIntercambio; apuntador++) {
			if (arr[apuntador] > arr[apuntador + 1]) {
				hayIntercambio = verdadero;
				aux = arr[apuntador];
				arr[apuntador] = arr[apuntador+1];
				arr[apuntador + 1] = aux;
			}
		}
		printf("pasada [%i]: ", hayIntercambio);
		for (int apuntador2 = 0; apuntador2 < numele; apuntador++) {
			printf("%i\t", arr[apuntador2]);
		}printf("\n");
	}
	for (apuntador = 0; apuntador < numele; apuntador++) {
		printf("%i\t", arr[apuntador]);
	}
}