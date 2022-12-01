//Descomponer polinomios en sus términos polinómicos,
//cada coeficiente será almacenado en un arreglo de tamañano n+1
//donde cada indice representará el grado del polinomio


#include <stdio.h>
int main(void) {

	char polinomio[100];


	printf("Introduce el polinomio:");
	gets_s(polinomio);

	printf("El polinomio escrito fue: %s", polinomio);
	
	
	return 0;
}