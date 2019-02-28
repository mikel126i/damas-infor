#include "tablero.h"
#include "casilla.h"


tablero::tablero()
{
	int n = 8, m = 8;
	c = new casilla *[n];		//filas
	for (i = 0;i < n;i++) {
		c[i] = new casilla [m];     //columnas
	}
}

void tablero::dibujarTablero() {
	//Borrado de la pantalla	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(0, 20, 10,  // posicion del ojo
		4.0, 4, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Y) 
	int n;

	for (i = 0;i < 7;i++) {	//cada i es una fila del tablero

		for (j = 0;j < 7;j++) { //cada j es una columna del tablero
			n = (i + j) % 2;
			glTranslatef(1, 0, 0);
			c[i][j].colorearCasilla(n);  //casillas pares negras, impares blancas
			c[i][j].dibujarCasilla();
		}
		glTranslatef(-7, 1, 0);
	}
	
	/*
	for (i = 0;i < 7;i++) {	//cada i es una fila del tablero
		
		for (j = 0;j < 7;j++) { //cada j es una columna del tablero
			n = (i+j) % 2;
			glTranslatef(1,0,0);
			c->colorearCasilla(n);  //casillas pares negras, impares blancas
			c->dibujarCasilla();
		}
		glTranslatef(-7, 1, 0);
	}
	*/

	
	glutSwapBuffers();

}
tablero::~tablero()
{
	int n = 8, m = 8;
	for (int i = 0; i < n; i++) {
		delete[] c[i];
	}
	delete[] c;
}
