#pragma once
#include "Ficha.h"
class Ficha;
class FichaNegra //public Ficha
{
public:
	FichaNegra();
	//Ficha f1;                    error c2079
	void dibujarFichasIniciales();
	Vector2D getPos(int t);
	void setPos(int t, float x, float y); //la ficha 't' del vector fichasse coloca en x, y


	~FichaNegra();
protected:

	Vector2D posicion;
	Vector2D fichas[20]; //este vector almacena la posici�n actual del centro de cada una de las 20 fichas blancas
};

