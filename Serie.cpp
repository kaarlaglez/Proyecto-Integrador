//CLASE SERIE
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Episodio.h"
#endif 
#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Temporada.h"
#endif 
#ifndef SERIE_H
#define SERIE_H
#include "Serie.h"
#endif
#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

//constructores
Serie::Serie(int _ID,string _nombre,float _duracion,string _genero,int _nEpisodios,int _nTemps,Temporada * arr){
			ID=_ID;
			nombre=_nombre;
			duracion=_duracion;
			genero=_genero;
			numEpisodios=_nEpisodios;
			numTemporadas=_nTemps;
			arrSeasons=arr;
}

//constructor por default
Serie::Serie(){
	ID=10025;
	nombre="Friends";
	duracion=200;
	genero="SITCOM";
	numEpisodios=120;
	numTemporadas=1;
	promEval=0;
}
		
//getters de la serie
void Serie::getSerie(){
	// cout<<"\nNombre de la serie: "<<nombre<<endl;
	 cout<<"ID: "<<ID<<endl;
	 cout<<"Duración (en minutos): "<<duracion<<endl;
	 cout<<"Género: "<<genero<<endl;
	 cout<<"Número de episodios: "<<numEpisodios<<endl;
	 cout<<"Número de temporadas: "<<numTemporadas<<endl;	 
}
		
//método para obtener la evaluación promedio
int Serie::evaluacion(){
	int eva,suma=0,promEval;
	
	for(int i=0;i<this->numTemporadas;i++){
		eva=arrSeasons[i].getEvaluacion();
		suma+=eva;
	}
	promEval=suma/numTemporadas;
	cout<<"EVALUACIÓN PROMEDIO DE LAS "<<numTemporadas<<" TEMPORADAS: "<<promEval<<endl;
	
 return promEval;
}
