#pragma once
#include"casilla.h"
#include "tablero.h"
class Ficha
{
public:
	Ficha();
	tablero t1;
	void dibujarFicha(void);
	void desplazarFicha(void);
	~Ficha();
};

