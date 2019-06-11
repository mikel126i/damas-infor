#pragma once
#include"casilla.h"
#include "tablero.h"
class Ficha
{
public:
	Ficha();
	Vector2D centro;
	Vector2D dibujarFicha(int f, int c);//esta funcion es para dibujar fichas nuevas (desplazamientos)

	~Ficha();
};

