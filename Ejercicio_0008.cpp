#include <stdio.h> 
#include <math.h>
#include <windows.h>

void  main()
{
	int i;
	int respuesta;

	//falso = 0, verdadero dif 0
	
	scanf_s("%i", &i);
	respuesta = i < 10;
	respuesta = i > 10;
	respuesta = i <= 10;
	respuesta = i >= 10;
	respuesta = i * 56 + 2 < i * i - 45;
	respuesta = i == 10;
	respuesta = i != 10;

	printf("%i", respuesta);

}