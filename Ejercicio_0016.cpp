#include "pch.h"
#include "gotoxy.h"
#include <stdio.h>

int main(){
	int iConta
	int limite=-1;

	while(limite<1||limite>25){
		printf("Tamaño : ");
		scanf_s("%i",&limite);
	}
	//Raya superior
	for(iConta = 0; iConta<limite; iConta++){
		gotoxy(iConta,0);
		printf("*");
	}
	//Raya izquierda
	for(iConta = 0; iConta<limite; iConta++){
		gotoxy(0,iConta);
		printf("*");
	}
	//Raya inferior
	for(iConta = 0; iConta<limite; iConta++){
		gotoxy(iConta,limite-1);
		printf("*");
	}
	//Raya inferior
	for(iConta = 0; iConta<limite; iConta++){
		gotoxy(limite-1,iConta);
		printf("*");
	}
}