/*El módulo .h sólo va la struct y el encabezado de las funciones*/

/*estructura de datos del TDA punto */
struct punto{
	float x;
	float y;
};
typedef struct punto Punto;

//Encabezados de las funciones (operaciones del TDA-punto)*/
Punto crearPunto(float n1, float n2);
void imprimirPunto(Punto A);
float calcularDistancia(Punto A, Punto B);
int obtenerCuadrante(Punto P);
//:
//:
