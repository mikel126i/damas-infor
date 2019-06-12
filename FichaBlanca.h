#pragma once
#include "Ficha.h"
class Ficha;
class FichaBlanca //public Ficha
{
public:
	FichaBlanca();
	//Ficha f1;                    error c2079
	void dibujarFichasIniciales();
	Vector2D getPos(int t);
	void setPos(int t, float x, float y); //la ficha 't' del vector fichasse coloca en x, y


	~FichaBlanca();
protected:

	Vector2D posicion;
	Vector2D fichas[20]; //este vector almacena la posición actual del centro de cada una de las 20 fichas blancas
};



