#include "casilla.h"
#include "glut.h"
#include "math.h"



casilla::casilla()
{
 
}
void casilla::colorearCasilla(int color) { //casillas pares negras, casillas impares blancas
	if (color == 0)
		glColor3ub(30, 20, 0);//negro
	if (color == 1)
		glColor3ub(255, 255, 255);//blanco
	
}

void casilla::dibujarCasilla() {


	glBegin(GL_POLYGON);
	glVertex3f(0.0f, 0.0f, 0.0f);      //pintamos una casilla cuadrada de lado uno
	glVertex3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glEnd();



	//no borrar esta linea ni poner nada despues
	
}
void casilla::dibujarMano(int f, int c) {

	posicion.x = (-c - 0.5);
	posicion.y = (-f - 0.5);
	glColor3ub(0, 0, 255);
	glTranslatef((posicion.x), (posicion.y), 0);
	glBegin(GL_POLYGON);
	glVertex3f(0.5f, 0.5f, 0.1f);
	glVertex3f(-0.5f, 0.5f, 0.1f);
	glVertex3f(-0.5f, -0.5f, 0.1f);
	glVertex3f(0.5f, -0.5f, 0.1f);
	glEnd();
	glTranslatef((-posicion.x), (-posicion.y), 0);


}
Vector2D casilla::getCasilla(int f, int c) {
	//nos devuelve un vector con las coordenadas de  la casilla[f][c] del tablero respecto la esquina inferior izquierda (0x0) del mismo

	Vector2D centro;
	
	centro.x = (-0.5 - c);
	centro.y = (-0.5 - f);
	//centro = (-0.5 - c, -0.5 - f); //sistema gltranslatef(-x,-y,z)
	return centro;
}


casilla::~casilla()
{
}
