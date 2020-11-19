#include "pch.h"
#include "gotoxy.h"
#include <stdio.h>

#define ARRIBA 0
#define ABAJO 1
#define DERECHA 1
#define IZQUIERDA 0

int main(){
	int cx,cy;
	int direccion = 1;
	int direccionx = 2

	while(cy<80){
		gotoxy(cx,cy);
		printf("*");
		Sleep(150);
		gotoxy(cs,cy);
		printf(" ");
		
		if(direccionx==DERECHA)
		cx++;
		if(direccionx==IZQUIERDA)
		cx--;
		if(direccion == ABAJO){
		
		}
	}
}