#pragma once
#include "FichaNegra.h"
#include "FichaBlanca.h"
#include "Vector2D.h"
class MoverFicha
{
public:
	MoverFicha();
	bool selecionada; //vale '1' si he seleccionado la ficha
	void identificarCasilla(float x, float y);
	void Mover(char tecla);
	void Seleccionar(char tecla);
	Vector2D posicion;
	FichaBlanca f1;
	tablero t1;
	~MoverFicha();
};

