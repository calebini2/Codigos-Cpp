#include <stdio.h>
#include <iostream>
#define numrec 1000
int main()
{
	float area;
	float xi, xf, delta, x, y;

	printf("Valor inicial: ");
	scanf_s("%f", &xi);
	printf("Valor final: ");
	scanf_s("%f", &xf);

	area = 0;
	delta = (xf - xi) / numrec;

	int icont;
	for (x = xi, icont = 0; x <= xf; x = xi + delta*(++icont)) {
		//esta es la funcion
		
		y = sin(x);

		/*y = 10; */
		area = area + delta * y;
	}

	printf("El area es: %f", area);
}