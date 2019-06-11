#include "FichaNegra.h"



FichaNegra::FichaNegra()
{
}
void FichaNegra::dibujarFichasIniciales() {

	int i, j;
	for (i = 6;i < 10;i++) {  //colocamos las fichas iniciales en aquellos que i+j sea par, de las 4 ultimas filas

		for (j = 0;j < 10;j++) {
			if ((i + j) % 2 == 0)
				f1.dibujarFicha(i, j);

		}

	}

}


FichaNegra::~FichaNegra()
{
}
