#include "pch.h"
#include "gotoxy.h"
#include <stdio.h>

int main(){
	int iConta
	int limite=-1;

	while(limite<1||limite>25){
		printf("Limite : ");
		scanf_s("%i",&limite);
	}

	for(iConta = 0; iConta<10; iConta++){
		gotoxy(iConta,iConta);
		printf("*");
	}
}