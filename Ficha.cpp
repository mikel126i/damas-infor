#include "Ficha.h"
#include "glut.h"
#include "Vector2D.h"



Ficha::Ficha()
{
	
}
Vector2D Ficha::dibujarFicha(int f, int c) {
	//dibuja una casilla (un cubo) en el centro de la casilla [f][c] (respecto esquina inferior izquierda)
	//al ejecutar está función se da por sentado que ya nos q situado en la esquina inferior izquierda
	casilla cas;
	 centro = cas.getCasilla(f, c);
	glTranslatef(centro.x, centro.y, 0);// centro.x= -c-0.5
	glutSolidCube(0.5);
	glTranslatef(-centro.x, -centro.y, 0);
	return centro;
	
}
Ficha::~Ficha()
{
}
