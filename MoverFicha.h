#pragma once
#include "FichaNegra.h"
#include "FichaBlanca.h"
#include "Vector2D.h"
class MoverFicha
{
public:
	MoverFicha();
	int f, c;
	bool turno;
	bool selecionada; //vale '1' si he seleccionado la ficha
	void MoverMano(unsigned char tecla);
	void Seleccionar(unsigned char tecla);
	Vector2D posicion;
	FichaBlanca FichaB;
	FichaNegra FichaN;
	casilla cas;
	~MoverFicha();
};

