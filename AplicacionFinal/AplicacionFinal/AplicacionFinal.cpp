//Descomponer polinomios en sus términos polinómicos,
//cada coeficiente será almacenado en un arreglo de tamañano n+1
//donde cada indice representará el grado del polinomio


#include <stdio.h>

void contadorTerminos( char *polinomio) {
	int i=0, j=0;
	while (polinomio[i] =! '\0')
	{
		i++;
	}


}

void gradoPolinomio(char *polinomio){
	int i = 0, j=0;
	char grado[10];

	for (i = 0; i < 100; i++) {
		if (polinomio[i] == '^' && polinomio[i] != '\0')
		{
			grado[j] = polinomio[i + 1];
			j++;
		}

	}
	printf("Grados: %s", grado);
}


int main(void) {

	char polinomio[100];


	printf("Introduce el polinomio:");
	gets_s(polinomio);
	printf("El polinomio escrito fue: %s", polinomio);

	//cuenta los términos
	contadorTerminos(polinomio);
	//Checar el grado del polinomio más grande
	gradoPolinomio(polinomio);



	
	

	
	return 0;
}