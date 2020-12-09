#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <Mmsystem.h>

int main()
{

    int iOpcion;
    //char playlist[5][40];
    ////asignar valores
    //strcpy_s(playlist[0], "c:\\include\\resources\\Avedepresa.wav");
    //strcpy_s(playlist[1], "c:\\include\\resources\\BACH.wav");
    //strcpy_s(playlist[2], "c:\\include\\resources\\POC.wav");
    //strcpy_s(playlist[3], "c:\\include\\resources\\EXplosion.wav");
    //strcpy_s(playlist[4], "c:\\include\\resources\\savage.wav
    WCHAR playlist[5][40] = {
     L"c:\\include\\resources\\Avedepresa.wav",
     L"c:\\include\\resources\\BACH.wav",
     L"c:\\include\\resources\\POC.wav",
     L"c:\\include\\resources\\EXplosion.wav",
     L"c:\\include\\resources\\savage.wav" };
    printf("Mi playlist\n");
    printf("\n1.- Avedepresa.wav");
    printf("\n2.- BACH.wav");
    printf("\n3.- POC.wav");
    printf("\n4.- EXplosion.wav");
    printf("\n5.- savage.wav");
    printf("\nOpcion: ");

    scanf_s("%i", &iOpcion);
    PlaySound(playlist[iOpcion - 1], NULL, SND_FILENAME);
}
