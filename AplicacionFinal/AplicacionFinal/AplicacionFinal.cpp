//Descomponer polinomios en sus términos polinómicos,
//cada coeficiente será almacenado en un arreglo de tamañano n+1
//donde cada indice representará el grado del polinomio


#include <stdio.h>
void gradoPolinomio(char *polinomio){
	int i = 0;
	char grado[2];

	for (i = 0; i < 100; i++) {
		if (polinomio[i] == '^' && polinomio != '\0')
		{
			
		}

	}

}


int main(void) {

	char polinomio[100];


	printf("Introduce el polinomio:");
	gets_s(polinomio);
	printf("El polinomio escrito fue: %s", polinomio);


	//Checar el grado del polinomio más grande
	gradoPolinomio(polinomio);



	
	

	
	return 0;
}