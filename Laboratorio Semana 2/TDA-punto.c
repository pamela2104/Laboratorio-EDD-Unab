#include <stdio.h>
#include <math.h>
#include "TDA-punto.h"

Punto crearPunto(float n1, float n2){
	Punto p;
	p.x = n1;
	p.y = n2;
	return p;
}
void imprimirPunto(Punto A){
	printf("\n El punto ingresado es: (%f,%f)", A.x, A.y);
}

float calcularDistancia(Punto A, Punto B){
	float d;
	d = sqrt( pow((B.y - A.y),2) + pow((B.x - A.x),2) );
	return d;
}
 
int obtenerCuadrante(Punto P){
	if (P.x>=0 && P.y>=0) return 1;
	if (P.x<0 && P.y>=0) return 2;
	if (P.x<0 && P.y<0) return 3;
	if (P.x>=0 && P.y<0) return 4;
}