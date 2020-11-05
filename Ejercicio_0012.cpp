#include <stdio.h>

int main()
{
	int i;
	printf("valor: ");
	scanf_s("%i", &i);

	switch (i)
	{
	case 1:
		printf("\n uno");
		break;
	case 2:
		printf("\n dos");
		break;
	case 3:
		printf("\n tres");
		break;
	default:
		printf("\n No se encuentra el numero solicitado");
	}
	printf("\n Terminamos\n");
}