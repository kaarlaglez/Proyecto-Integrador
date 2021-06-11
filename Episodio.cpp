//Clase EPISODIO
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Episodio.h"
#endif 
#include <iostream>
#include <string>
using namespace std;

Episodio::Episodio(string t,int n){
  titulo=t;
  numTemporada=n;
}

void Episodio::getEpisodio(){
  cout<<"\nDatos episodio: "<<endl;
  cout<<"Título: "<<titulo<<endl;
  cout<<"Número de temporada: "<<numTemporada<<endl;
}

Episodio::Episodio() {
  titulo="NO HAY TITULO DE EPISODIO";
  numTemporada=0;
}
