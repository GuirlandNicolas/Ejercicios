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

int getNumero(int variableF , int max, int min,int* pVariable);


int main(void)
{	int variable;
	int maximo;
	int minimo;
	int pVariable = 0;


	getNumero(variable,maximo,minimo,&pVariable);

	printf(" \n Su numero de variable correcto es: %d ",pVariable );


	return 0;
}

int getNumero(int variableF , int max, int min,int* pVariable)
{
	int maximo = 150;
	int minimo = 5;
	int reintentos = 0;

	do
	{
		printf("\n Ingrese una variable: ");
		scanf("%d",&variableF);

		if (variableF >= min && variableF <= max)
		{
			variableF = *pVariable;

			reintentos++;
		}

		else
		{
			printf("\n Su variable no pertenece al rango, intente nuevamente");
			reintentos++;
		}

	} while(reintentos < 3);

	printf("\n Se acabaron los %d intentos",reintentos);

	return 0;

}


