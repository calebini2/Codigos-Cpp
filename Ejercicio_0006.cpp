#include <stdio.h> 
#include <math.h>
#include <windows.h>
//#include <string.h>
#define PI 3.14151927

void  main()
{
	char cadena[5] = "Hola";
	char cad2[20];
	char cad3[20];
	//int i;

	printf("Nombre: ");
	//scanf_s("%s", cad2, 19);
	gets_s(cad2, 19);
	//scanf_s("%i", &i);
	printf("Apellido: ");
	//scanf_s("%s", cad3, 19);
	gets_s(cad3, 19);

	printf("%s ", cadena);
	printf("%s %s", cad2, cad3);
}