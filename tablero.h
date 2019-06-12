#pragma once
#include "casilla.h"
#include "glut.h"
#include "Vector2D.h"
#include "Ficha.h"
class casilla;
class tablero
{
public:
	casilla **c;
	int i, j, n, m;
	tablero();
	void dibujarTablero();

	//Vector2D getCasilla(int f, int c); 
	//void dibujarFichasIniciales();
	~tablero();
};

