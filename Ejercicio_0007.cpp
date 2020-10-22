#include <stdio.h> 
#include <math.h>
#include <windows.h>
//#include <string.h>
#define PI 3.14151927
#define saludo "Hola"  //esta es una macro

void  main()
{
	char cadena[50] = saludo;
	char grettings[] = "hi everyone";
	char cad2[20];
	char cad3[20];
	char NombreCompleto[80];
	//float area = radio * radio * PI
	//int i;

	//cad2 = "Hola";
	strcpy_s(cadena, 49 , "Buenos dias");


	printf("Nombre: ");
	//scanf_s("%s", cad2, 19);
	gets_s(cad2, 19);
	//scanf_s("%i", &i);
	printf("Apellido: ");
	//scanf_s("%s", cad3, 19);
	gets_s(cad3, 19);

	printf("%s ", cadena);
	printf("%s %s", cad2, cad3);
	printf(" - - [%c %c]", cad2[0], cad3[0]);

	strcpy_s(NombreCompleto , 79, cad2); //reescribe
	strcat_s(NombreCompleto, 79, cad3); //concatena
	printf("\n%s", NombreCompleto);
}