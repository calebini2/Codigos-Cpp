#include <stdio.h> 
#include <math.h>

void  main() 
{
	int i = 11;
	float j;

	j = i / 3; //cociente
  //j = 1 / 3.0; Escribe los decimales de la division en su version flotante
	j = i % 3; //residuo (modulo) Solo numeros enteros

	i = i + 1;
	//printf("%f %i \n", j, (++i)++); Opcion no tan recomendada de hacer
	printf("%f %i", j,i++); // i++ = 1 mas "despues"  ++i = 1 mas "ahora"

	i += 1;
	i -= 1;
	i /= 1;
	i *= 3;


	//printf("%f", j);
}