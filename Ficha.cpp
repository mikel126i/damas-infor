#include "Ficha.h"
#include "glut.h"
#include "Vector2D.h"



Ficha::Ficha()
{
	
}
Vector2D Ficha::dibujarFicha(int f, int c) {
	/*
	//esto es correcto para dibujar una ficha en el (2,5)
	glTranslatef(-5.5, -2.5, 0);
	glutSolidCube(0.5);
	*/

	//dibuja una casilla (un cubo) en el centro de la casilla [f][c] (respecto esquina inferior izquierda)
	//al ejecutar está función se da por sentado que ya nos hemos situado en la esquina inferior izquierda
/*
	//esto ha dejado de funcionar no se sabe porque

	casilla cas;
	 centro = cas.getCasilla(f, c);
	glTranslatef(centro.x, centro.y, 0);// centro.x= -c-0.5
	glutSolidCube(0.5);
	glTranslatef(-centro.x, -centro.y, 0);
	return centro;
	*/
	
	//esto solo traslada en el eje x
	centro.x = (-c - 0.5);
	centro.y = (-f -0.5);
	glTranslatef((centro.x), (centro.y), 0);
	glutSolidCube(0.5);
	glTranslatef((-centro.x), (-centro.y), 0);
	return centro;
	
	
	
}
Ficha::~Ficha()
{
}
