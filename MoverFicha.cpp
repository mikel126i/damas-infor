#include "MoverFicha.h"



MoverFicha::MoverFicha()
{
	selecionada = false;
	posicion.x = 0;
	posicion.y = 0;
}
void MoverFicha::Mover(char tecla) {
	if (tecla == 'w' && posicion.y > 0) posicion.y--;
	if (tecla == 'a' && posicion.x > 0) posicion.x--;
	if (tecla == 'd' && posicion.x < 7) posicion.x++;
	if (tecla == 's' && posicion.y < 7) posicion.y++;
	
}
void MoverFicha::Seleccionar(char tecla) {
	int i;
	if (tecla == ' ') {   //al pulsar espacio sobre una casilla, comprobamos si alguna de las fichas (blancas en este caso)
		//se encuentra en esa casilla
		for (i = 0;i < 20;i++) {
			//if (posicion.x = f1.getPos(i).x && posicion.y = f1.getPos(i).y) selecionada = true;
			if (posicion = f1.getPos(i)) selecionada = true;
		}
	}
}





