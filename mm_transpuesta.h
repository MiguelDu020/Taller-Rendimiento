/**************************************************************
		Pontificia Universidad Javeriana
	Autores:Miguel Duarte 
 		Daniela Moreno
	Materia: Sistemas Operativos
	Tema: Taller de Evaluación de Rendimiento
	
****************************************************************/

#ifndef _MULT_MATRICES_H_
#define _MULT_MATRICES_H_

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

void llenar_matriz(int SZ); 
void print_matrix(int sz, double *matriz);
void inicial_tiempo();
void final_tiempo();
void *mult_thread(void *variables);

#endif
