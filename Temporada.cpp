//CLASE TEMPORADA
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

using namespace std;

//constructores
Temporada::Temporada(Episodio * arr,int eval,int n){
	evaluacion=eval;
	arrEpisodes=arr;	
  numEpisodios=n;
}

Temporada::Temporada(){
	evaluacion=0;	
  numEpisodios=0;
}

//getters
/*
void Temporada::getTemporada(){
	cout<<"\nEvaluaci?n de la temporada: "<<evaluacion<<endl;
	//cout<<"Episodios: "<<arrEpisodes<<endl; 	
}*/

int Temporada::getNumEpisodios(){
  return numEpisodios;
}

int Temporada::getEvaluacion(){
  return evaluacion;
}


//getter por temporada de su evaluación
void Temporada::getTemporada(){
 // cout<<"Episodios de la temporada "<<arrEpisodes[numTemporada].get_numTemporada()<<endl;
  for(int i=0;i<numEpisodios;i++){
    arrEpisodes[i].get_titulo();
  }	
}

