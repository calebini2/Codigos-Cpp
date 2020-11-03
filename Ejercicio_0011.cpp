#include <stdio.h>
#include "iostream"
#define verdadero 1
#define falso 0

int main()
{
	int hora, minuto;
	int am = verdadero;

	printf("Hora : ");
	scanf_s("%d", &hora);
	printf("Minuto : ");
	scanf_s("%d", &minuto);
	printf("AM = [1],PM = [0]");
	scanf_s("%i", &am);
	if (!(hora < 0 || hora>12)) {
		if (minuto >= 0 && minuto < 60) {
		minuto++;
		if (minuto >= 60) {
			hora++;
			minuto = 0;
			if (hora > 12) {
				hora = 1;
			}
			if (hora == 12) {
				am = !am;
				}
			printf("%2i:%02i", hora, minuto);
			if (am)
				printf("AM");
			else
				printf("PM");
			}
		}
		else {
			printf("Verifique los valores de hora[1-12] y minuto[0-60]");
		}
	}


}