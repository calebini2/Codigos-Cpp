#include <stdio.h> 
#include <math.h>
#include <windows.h>

void  main()
{
	char c; //solo guarda 1 letra
	c = 'hola'; //solo guarda letra a / error
	c = 65; //guarda la letra A del codigo ASCII
	printf("Caracter: ");
	scanf_s("%c", &c);

	printf("%c- %i[%x]",c,c,c);
	c++;
	printf(" => %c", c);

	MessageBox(NULL, L"Presiona ok para terminar", L"UNAM", MB_OK | MB_ICONINFORMATION);

	/*
	c = 'hola';
	c = "hola";
	c = "a";
	*/
}