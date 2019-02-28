// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

int main()
{
	//primero creamos la matrid de punteros
	int **c, n=8, i,j, m=8;
	c = new int *[n];		//filas
	for (i = 0;i < 8;i++) {  
		c[i] = new int[m];     //columnas
	}

	//ahora trabajamos con la matriz: le asignamos un valor a cada dirección de memoria que la compone e imprimimos dicho valor por pantalla
	for (i = 0;i < n;i++) {
		std::cout << "\n";		//cambio de fila
		for (j = 0;j < 8;j++) {
			c[i][j] = (i + j);
			std::cout << c[i][j] << " ";

		}
	}
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
