#include <iostream>
#define NUM_ALUMNOS 5
#define NUM_CALIF 3

int main()
{
	int i, j;
	float calif[NUM_ALUMNOS][NUM_CALIF];
	float prom[NUM_ALUMNOS];
	/*=
{   {2,7,5},
	{6,7,5},
	{8,5,10},
	{2,8,5},
	{9,5,9},
};*/
//Leer los valores de pantalla
	//Para todos los alumnos
	for (i = 0; i < NUM_ALUMNOS; i++)
	{
		printf("\nAlumno %i ", i + 1);
		//Lee las calificaciones de ese alumno
		for (j = 0; j < NUM_CALIF; j++)
		{
			printf("\nCalificacion %i: ", j + 1);
			scanf_s("%f", &calif[i][j]);
		}
	}
	//Sacamos promedios
		//Para cada alumno
	for (i = 0; i < NUM_ALUMNOS; i++)
	{
		float suma = 0;
		//Lee las calificaciones de ese alumno
		for (j = 0; j < NUM_CALIF; j++)
			suma += calif[i][j];
		prom[i] = suma / NUM_CALIF;
	}

	//Mostrar el resultado
	for (i = 0; i < NUM_ALUMNOS; i++)
	{
		printf("\nPromedio del alumno %f", prom[i]);
	}

}