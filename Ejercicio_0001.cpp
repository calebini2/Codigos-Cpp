#include <stdio.h>

void  main()
{
	int base;
	int altura;
	int area;
	//Entrada o definicion
	//Aqui va la carta de amor desesperado(comentario unilinea)
	printf("Base: ");
	scanf_s("%i", &base);//Indispensable el '&' 
	printf("Altura: ");
	scanf_s("%i", &altura);
	//Proceso
	area = base * altura;
	//Salida
	printf("Area del rectangulo de %i x %i = %i", base,altura,area);
	/*Comentario
	largo de
	varias lineas*/
}