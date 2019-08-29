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
float identificaMaximo(float auxA,float maximo, float *maximoF);
float identificaMinimo(float auxB,float minimo, float *minimoF);



int main(void)
{


	int i;
	float numeroA;
	float numeroB;
	float resultado;
	float sumaTotal = 0;
	float maximo = 0;
	float minimo = 100;
	float maximoF = 0;
	float minimoF = 100;
	float cantidad = 3;

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
	identificaMaximo(aux, maximo , &maximoF);
	identificaMinimo(aux, minimo , &minimoF);

	printf("El resultado de esta suma es:  %f \n",resultado);
	}

	printf("La resultado maximo es:  %f \n",maximoF);
	printf("La resultado minimo es:  %f \n",minimoF);
	printf("La suma total de todas las sumas es:  %f \n",sumaTotal);

	return 0;
}



int sumaDosFloat(float numero1,float numero2,float *resultado)
	{

	*resultado=numero1+numero2;
	return 0;

	}




float identificaMaximo(float auxA, float maximo,float *maximoF)
{
	if (auxA > maximo)
	{
		*maximoF = auxA;
	}
	return 0;
}


float identificaMinimo(float auxB, float minimo,float *minimoF)
{
	if (auxB < minimo)
	{
		*minimoF = auxB;
	}
	return 0;
}


