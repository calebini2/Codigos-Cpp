#include <stdio.h> 
#include <math.h>
//Calcular la division de una fraccion
void  main()
{
	int num1, num2, num3, numR;
	int den1, den2, den3, denR;

	printf("Numerador 1 : ");
	scanf_s("%i", &num1);

	printf("Denominador 1 : ");
	scanf_s("%i", &den1);

	printf("Numerador 2 : ");
	scanf_s("%i", &num2);

	printf("Denominador 2 : ");
	scanf_s("%i", &den2);

	printf("Numerador 3 : ");
	scanf_s("%i", &num3);

	printf("Denominador 3 : ");
	scanf_s("%i", &den3);

	//Proceso
	numR = num1 * den2 + num2 * den1;
	denR = den1 * den2;

	//Salidas
	printf("Resultado = (%i / %i)", numR, denR);

	/* Jerrauia de las operaciones mayor(arriba) a menor(abajo)
	
	()
	- + (unario) Los que cambian el signo de los datos
	++ --
	* / %
	+ - (binario)
	
	*/
}