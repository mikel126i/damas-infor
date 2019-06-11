#pragma once
#include "Vector2D.h"
#include "FichaBlanca.h"
class casilla
{
public:
	casilla();
	void dibujarCasilla(void);
	void colorearCasilla(int color);
	Vector2D getCasilla(int f, int c);
	~casilla();
};

