#pragma once
#include "casilla.h"
#include "glut.h"
#include "Vector2D.h"
#include "Ficha.h"
class Ficha;
class tablero
{
public:
	casilla **c;
//	Ficha *f1;
	int i, j, n, m;
	tablero();
	void dibujarTablero();

	//Vector2D getCasilla(int f, int c); 
	//void dibujarFichasIniciales();
	~tablero();
};

