#include "MoverFicha.h"



MoverFicha::MoverFicha()
{
	selecionada = false;
	f=5;
	c = 5;
	//cas.dibujarMano(5, 5);
	
}
void MoverFicha::MoverMano(unsigned char tecla) {
	if (tecla == 'w' && f < 10) {
		f++;
		//cas.dibujarMano(f, c);
	}
	if (tecla == 'a' && c > 0) {
		c--;
		//cas.dibujarMano(f, c);
	}
	if (tecla == 'd' && c < 10) {
		c++;
		//cas.dibujarMano(f, c);
	}
	if (tecla == 's' && f > 0) {
		f--;
		//cas.dibujarMano(f, c);
	}

}
void MoverFicha::Seleccionar(unsigned char tecla) {
	int i;
	if (turno == 1) {
		if (tecla == ' ') {   //al pulsar espacio sobre una casilla, comprobamos si alguna de las fichas (blancas en este caso)
			//se encuentra en esa casilla
			for (i = 0;i < 20;i++) {
				//if (posicion.x = f1.getPos(i).x && posicion.y = f1.getPos(i).y) selecionada = true;
				if (posicion = FichaB.getPos(i)) selecionada = true;
			}
		}
	}
	if (turno == 0) {
		if (tecla == ' ') {
			for (i = 0;i < 20;i++) {
				if (posicion = FichaN.getPos(i)) selecionada = true;
			}
		}
	}
}
MoverFicha::~MoverFicha() {

}




