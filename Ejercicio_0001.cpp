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
	printf("Area del rectangulo de %8.2f x %8.2f = %10.2f", base,altura,area);
	//%8 pociciones y .2 decimales y 1 pocision la ocupa el punto
	//si solo se pone '%.2' solo dejara el espacio para los decimales, los enteros van a ser los que sean
	//con %02 rellena con '0' los espacios que no tiene valor
	/*Comentario
	largo de
	varias lineas*/
}