/*
 ============================================================================
 Name        : Clase4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int sumaDosFloat(float numero1,float numero2,float *resultado);
float identificaMaximo(float auxA, float *pMaximo);
float identificaMinimo(float auxB,float *pMinimo);



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



int sumaDosFloat(float numero1,float numero2,float *resultado)
	{

	*resultado=numero1+numero2;
	return 0;

	}




float identificaMaximo(float auxA, float *pMaximo)
{
	float maximo = *pMaximo;
	if (auxA > maximo)
	{
		*pMaximo = auxA;
	}
	return 0;
}


float identificaMinimo(float auxB,float *pMinimo)
{
	float minimo= *pMinimo;

	if (auxB < minimo)
	{
		*pMinimo = auxB;
	}
	return 0;
}



