/*
 ============================================================================
 Name        : Clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int sumaDosFloat(float numero1,float numero2,float *resultado);


/*float identificaMaximo(float);
float identificaMinimo(float);  */


int main(void)
{


	int i;
	float numeroA;
	float numeroB;
	float resultado;
	float sumaTotal = 0;
	float maximo = 0;
	float minimo = 100;



	for (i=0; i<3 ;i++)
{
	float aux = 0;

	printf("El primer numero es: ");
	scanf("%f",&numeroA);
	printf("El segundo numero es: ");
	scanf("%f",&numeroB);

	sumaDosFloat(numeroA, numeroB, &resultado);
	sumaTotal = sumaTotal+resultado;
	printf("El resultado de esta suma es:  %f \n",resultado);

	aux = aux + resultado;

	if (aux>maximo)
		{
			maximo = aux;
		}

	if (aux<minimo)
		{
			minimo = aux;
		}


	}

	printf("La resultado maximo es:  %f \n",maximo);
	printf("La resultado minimo es:  %f \n",minimo);
	printf("La suma total de todas las sumas es:  %f \n",sumaTotal);


	return 0;
}



int sumaDosFloat(float numero1,float numero2,float *resultado)
{

		*resultado=numero1+numero2;
		return 0;

}



/*
float identificaMaximo(float* )
{

}

float identificaMinimo(float)
{

}
*/

