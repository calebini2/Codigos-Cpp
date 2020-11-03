#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main() {
	char pass[20];
	scanf_s("%s", pass, 19);

	if (strcmp(pass, "FRESA") == 0) {
		printf("Bienvenido");
	}
	else {
		printf("Pocholongo,No te conozco");
		//ExitWindowsEx(EWX_POWEROFF,EWX_FORCE);
	}
}