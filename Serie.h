//CLASE SERIE
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Episodio.h"
#endif 
#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Temporada.h"
#endif 
#include <iostream>
#include <string>

#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif


using namespace std;

class Serie:public Video{
	private:
		int numEpisodios, numTemporadas;
		float promEval;
		Temporada * arrSeasons;
		
	public:
		
		//constructores
		Serie(int,string,float,string,int,int,Temporada *);
		Serie();

		//getters de la serie
		void getSerie();
	//	string getNombre();
		
		//método para obtener la evaluación, sobrecarga
		int evaluacion();
};
