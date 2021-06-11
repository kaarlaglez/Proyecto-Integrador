//CLASE TEMPORADA
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Episodio.h"
#endif
#include <iostream>
#include <string>

using namespace std;

class Temporada{
	private:
		//arreglo de episodios, relaci�n de composici�n
		
		//puntero
		Episodio * arrEpisodes;
		int evaluacion;
    	int numEpisodios;
    
	public:
		
		
		//getters
    	int getNumEpisodios();
    	void getTemporada();
		
		//getter de evaluaci�n por temporada, se ingresa un int de la temporada-1 a la que se quiere acceder
		int getEvaluacion();
		
		//constructores con par�metro y por default
		Temporada(Episodio *,int,int);
		Temporada();
};
 
