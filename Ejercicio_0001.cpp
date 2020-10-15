#include <stdio.h>

void  main()
{
	float base;
	float altura;
	float area;
	//Entrada o definicion
	//Aqui va la carta de amor desesperado(comentario unilinea)
	printf("Base: ");
	scanf_s("%f", &base);//Indispensable el '&' 
	printf("Altura: ");
	scanf_s("%f", &altura);
	//Proceso
	area = base * altura;
	//Salida
	printf("Area del rectangulo de %f x %f = %f", base,altura,area);
	/*Comentario
	largo de
	varias lineas*/
}