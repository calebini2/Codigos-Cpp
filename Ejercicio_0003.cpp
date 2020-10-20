#include <stdio.h> 
#include <math.h>
//Calcular area del triangulo
void  main()
{
	float base, altura, area;

	printf("Base: "); scanf_s("%f", &base);
	printf("Altura: "); scanf_s("%f", &altura);
	area = base * altura / 2;
	printf("El area es %f", area);
}