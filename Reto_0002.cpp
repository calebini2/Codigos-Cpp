#include <stdio.h> //15 de octubre 2020
#include <math.h>

void  main() //Borra los comentarios ( /**/ ) para que puedas probar los ejercicios :D
{
	//Reto #1

	/*

	float b, h; //Crea las variables que se van a utilizar

	printf("Ingrese la medida de la base del triangulo : "); //Pide la base del triangulo y la guarda
	scanf_s("%f", &b);

	printf("Ingrese la medida de la altura del triangulo : "); //Pide la altura del triangulo y la guarda
	scanf_s("%f", &h);

	printf("El area del triangulo de base %.2f y de altura %.2f tiene de area : %.2f", b, h, (b * h) / 2); //Al final calcula el area del triangulo haciendo la operacion en el mensaje final

	*/

	//Reto #2

	/*

	float p1, p2, p3, t1, t2, t3, p, promp, promt; //Se declaran las variables que vamos a utilizar

	printf("Ingrese la calificacion de los 3 parciales : \n");	//Se piden las calificaciones de los parciales y se guardan
	scanf_s("%f %f %f", &p1, &p2, &p3);

	promp = (p1 + p2 + p3) / 3;									//Se calcula el promedio de los parciales

	printf("Ingrese la calificacion de las 3 tareas : \n");		//Se piden las calificaciones de las tareas y se guardan
	scanf_s("%f %f %f", &t1, &t2, &t3);

	promt = (t1 + t2 + t3) / 3;									//Se calcula el promedio de las tareas

	printf("Ingrese la calificacion del proyecto : \n");		//Se pide la calificacion del proyecto y se guarda
	scanf_s("%f", &p);

	printf("\nTu calificacion final en la materia de Computadoras y Programacion es : %.3f \n", (promp + promt + p) / 3); //Se calcula el promedio total y se imprime

	*/

	//Reto #3

	/*
	int num, mon;
	float bono;																		//Se declaran las variables

	printf("Ingrese su numero de celular : \n");									//Se pide el numero celular de 10 digitos y se guarda
	printf("55 ");
	scanf_s("%8i", &num);															//NOTA: no se como limitar correctamente el numero

	printf("Ingrese el monto a recargar (10, 20, 50, 100, 200, 300, 500) : \n");	//Se pide que ingrese el monto a recargar
	scanf_s("%3i", &mon);

	bono = mon * .10;																//Se calcula el 10% de bonificacion

	printf("Se le ha recargado al numero 55 %i la cantidad de $%i con una bonificacion de %2.0f", num, mon, bono);					 //Se imprimen los resultados

	*/

	//Reto capcioso

	/*
	
	//----------------------------------------SE INCLUYE LA LIBRERIA <math.h> PARA PODER HACER POTENCIAS Y RAICES-----------------------------------------------------
	
	double a, b, c;											//Se declaran las variables
	const int potencia = 2;									//Se declara una constante que sera la potencia

	printf("Ingrese los valores de a, b, c : \n");			//Se pide que ingrese los valores de a, b y c respectivamente
	scanf_s("%lf %lf %lf", &a,&b,&c);
	
	double raiz, r1, r2, b2;								//Se declaran variables "temporales" para hacer las operaciones

	b2 = pow(b, potencia);									// b se eleva al cuadrado 

	raiz = sqrt(b2 - (4 * a * c));							// Se calcula la raiz de la formula general (chicharronera)

	r1 = ((-1 * b) + raiz) / (2 * a);						// Se calcula la primera raiz de la funcion (con simbolo +)

	r2 = ((-1 * b) - raiz) / (2 * a);						// Se calcula la segunda raiz de la funcion (con simbolo -)

	printf("Las raices de la ecuacion cuadratica son :\n x1 = %.4lf \n x2 = %.4lf \n", r1, r2);					//Se imprimen los resulados obtenidos

	*/
}