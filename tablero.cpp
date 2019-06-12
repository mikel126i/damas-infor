#include "tablero.h"
#include "casilla.h"
#include "Ficha.h"
#include "math.h"
#include "FichaBlanca.h"
#include "FichaNegra.h"
#include "casilla.h"


tablero::tablero()
{
	//reservamos memoria para la matriz de punteros del trablero
	n = 10, m = 10;
	c = new casilla *[n];		//filas
	for (i = 0;i < n;i++) {
		c[i] = new casilla [m];     //columnas
	}
	
}

void tablero::dibujarTablero() {
	FichaBlanca f1;
	FichaNegra f2;
	Ficha fich;
	casilla cas;


	gluLookAt(5, 10, 50,  // posicion del ojo
		5.0, 5.0, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Z) 
	int n;

	for (i = 0;i < 10;i++) {	//cada i es una fila del tablero

		for (j = 0;j < 10;j++) { //cada j es una columna del tablero
			n = (i + j) % 2;
			glTranslatef(1, 0, 0);
			c[i][j].colorearCasilla(n);  //casillas pares negras, impares blancas
			c[i][j].dibujarCasilla();
		}
		glTranslatef(-10, 1, 0); // (x,y,z)
	}
	glTranslatef(11, 0, 0); //volvemos a la esquina inferior izquierda del tablero
	glColor3ub(250, 20, 0); //rojo
	f1.dibujarFichasIniciales();
	glColor3ub(20, 250, 0);
	f2.dibujarFichasIniciales();

	
	
	


}



/*void dibujarFichasIniciales() {
		int i, j, n=0;
		for (i = 0;i < 4;i++) {	

			for (j = 0;j < 8;j++) { 
				if (n%2==0)  
				f1.dibujarFicha(i, j); //????por que cojones no me deja usar el objeto de Ficha
				n++;
			}
			glTranslatef(-7, 1, 0);
		}
}*/
tablero::~tablero()
{

}
