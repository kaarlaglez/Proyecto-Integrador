//CLASE VIDEOTECA
#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif
#ifndef SERIE_H
#define SERIE_H
#include "Serie.h"
#endif
#ifndef PELICULA_H
#define PELICULA_H
#include "Pelicula.h"
#endif
#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Temporada.h"
#endif 
#include <iostream>
#include <string>


using namespace std;

class Videoteca{
	private:
		//arreglos de pelicula y de serie
		Pelicula * arrPeli;
		Serie * arrSerie;
		
		int numPelis;
		int numSeries;
	public:
		
		//constructores con parámetro y por default
		Videoteca(Pelicula *,Serie *,int,int);
		
		//método para mostrar el contenido de la videoteca
		void enlistar();
};

