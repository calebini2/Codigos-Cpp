#include <stdio.h>

int main()
{
		char cadena[10];
		char claveTarea[] = "CYP01-2000614-ErnestoPeñaloza.zip";
		int limInf, limSup;

		printf("Caracter Inicial: ");
		scanf_s("%i", &limInf);

		printf("Caracter Final: ");
		scanf_s("%i", &limSup);

		if (limInf <= limSup)
		{
			while (limInf <= limSup)
			{
				printf("%c", claveTarea[limInf]);
				limInf++;
			}
		}
		printf("\n\n");
		//Separalo en los tres campos de datos
		int iConta, iLimite;
		char c = '\0';
		iConta = 0;

		iLimite = strlen(claveTarea);

		while (iConta < iLimite && c != '.')
		{
			c = claveTarea[iConta];

			if (c == '-' || c == '.')
				printf("\n");
			else
				printf("%c", c);
			iConta++;
		}
}