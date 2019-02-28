#pragma once
#include "casilla.h"
#include "glut.h"
class tablero
{
public:
	casilla **c;
	int i, j;
	tablero();
	void dibujarTablero();
	~tablero();
};

