#include "FichaNegra.h"
FichaNegra::FichaNegra()
{
}
Vector2D FichaNegra::getPos(int t) {
	return fichas[t];
}
void FichaNegra::setPos(int t, float x, float y) {
	fichas[t].x = x;
	fichas[t].y = y;
}

void FichaNegra::dibujarFichasIniciales() {


	//esta funcion se encarga de dibujar las fichas iniciales y de asignar su posición central a un vector fichas
	//damos por sentado que ya estamos situados en la esquina inferior izquierda
	Ficha fich;
	int n = 0;
	int i, j;
	for (i = 6;i < 10;i++) {  //colocamos las fichas iniciales en aquellos que i+j sea par, de las 4 primeras filas

		for (j = 0;j < 10;j++) {
			if ((i + j) % 2 == 0)
				fichas[n] = fich.dibujarFicha(i, j);
			n++;
		}

	}

}

FichaNegra::~FichaNegra()
{
}
