#include <stdio.h>
#include "TDA-punto.h"

int main(){
	float num1,num2, distancia;
	Punto pto1, pto2;
	int cuadrante;
	/*Solicitar al usuario los valores de las  
	  coordenadas x e y para pto1 y pto2 */
	num1 = 2; //usted use scanf
	num2 = 1; //usted use scanf
	pto1 = crearPunto(num1,num2);
	imprimirPunto(pto1);

	cuadrante = obtenerCuadrante(pto1);
	printf("\nCUADRANTE del punto 1: %d",cuadrante);

	num1 = -2; //usted use scanf
	num2 = 2; //usted use scanf
	pto2 = crearPunto(num1,num2);
	imprimirPunto(pto2);
	cuadrante = obtenerCuadrante(pto2);
	printf("\nCUADRANTE del punto 2: %d",cuadrante);

	distancia =  calcularDistancia(pto1,pto2);
	printf("\nLa distancia entre los dos puntos es: %f",distancia);
}
