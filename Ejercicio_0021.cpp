char cad1[50];
char cad2[50];
char cad3[50];
int iConta;
int iConta2;
int iNumCarac;

printf("cadena 1: "); scanf_s("%s", cad1, 49);
printf("cadena 2: "); scanf_s("%s", cad2, 49);

iConta = 0;
//iNumCarac = strlen(cad1);
while (cad1[iConta] != '\0')
{
    cad3[iConta] = cad1[iConta];
    iConta++;
}
iConta2 = 0;
while (cad2[iConta2] != '\0')
{
    cad3[iConta] = cad2[iConta2];
    iConta++;
    iConta2++;
}

cad3[iConta] = '\0';
printf(cad3);