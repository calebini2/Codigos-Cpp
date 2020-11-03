#include <stdio.h>
#include "iostream"

int main()
{
	float a, b, c;
	float dis,x1,x2,img;

	printf("Coeficiente a: ");
	scanf_s("%f", &a);
	printf("Coeficiente b: ");
	scanf_s("%f", &b);
	printf("Coeficiente c: ");
	scanf_s("%f", &c);

	dis = pow(b,2) - 4 * a * c;
	if (dis != 0) {
		if (dis > 0) {
			x1 = (-b + sqrt(dis)) / 2 * a;
			x2 = (-b - sqrt(dis)) / 2 * a;
			printf("Raices reales: \tx1=%f\n \t\tx2=%f", x1, x2);
		}
		else{
			x1 = -b / 2 * a;
			img = sqrt(-dis) / 2 * a;
			printf("Raices imaginarias: \tx1= %f + %fi \n", x1, img);
			printf("\t\t\tx2= %f - %fi \n", x1, img);
		} 
	}else{
		x1 = -b / 2 * a;
		printf("Raices e iguales: \tx1=%07.2f\n\t\t\t\tx2=%07.2f", x1, x1);
		}
}