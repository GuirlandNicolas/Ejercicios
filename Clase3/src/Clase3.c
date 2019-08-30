/*
 ============================================================================
 Name        : Clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"





int main(void)
{


	int i;
	float numeroA;
	float numeroB;
	float resultado;
	float sumaTotal = 0;
	float pMaximo = 0;
	float pMinimo = 100;
	float cantidad;

	printf("Cantidad de veces que desea iterar: ");
	scanf("%f",&cantidad);

	for (i=0; i<cantidad ;i++)
	{
	float aux = 0;


	printf("El primer numero es: ");
	scanf("%f",&numeroA);
	printf("El segundo numero es: ");
	scanf("%f",&numeroB);

	sumaDosFloat(numeroA, numeroB, &resultado);
	sumaTotal = sumaTotal+resultado;

	aux = aux + resultado;

	identificaMaximo(aux,  &pMaximo);
	identificaMinimo(aux,  &pMinimo);

	printf("El resultado de esta suma es:  %f \n",resultado);
	}

	printf("La resultado maximo es:  %f \n",pMaximo);
	printf("La resultado minimo es:  %f \n",pMinimo);
	printf("La suma total de todas las sumas es:  %f \n",sumaTotal);

	return 0;
}



