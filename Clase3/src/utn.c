/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */

#include "utn.h"





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



