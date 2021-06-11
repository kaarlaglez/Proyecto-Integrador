//Clase pel�cula
#ifndef PELICULA_H
#define PELICULA_H
#include "Pelicula.h"
#endif
#include <string>
#include <iostream>
#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif
using namespace std;

//Constructor con par�metros
Pelicula::Pelicula(int i,string name,float dur,string gen,int e){
  ID=i;
  nombre=name;
  duracion=dur;
  genero=gen;
  evaluation=e;
}

//constructor default
Pelicula::Pelicula(){
	ID=0;
  nombre="SIN NOMBRE LA PELICULA";
  duracion=0.0;
  genero="SIN G�NERO";
  evaluation=0;
}


//muestra datos de la pelicula
void Pelicula::getPelicula(){
  cout<<"\nNombre pelicula: "<<nombre<<endl;
  cout<<"ID pelicula: "<<ID<<endl;
  cout<<"Duraci�n pelicula (en mins): "<<duracion<<endl;
  cout<<"G�nero pelicula: "<<genero<<endl;
  cout<<"Evaluaci�n pelicula: "<<evaluation<<endl;
}

int Pelicula::evaluacion(){
  return evaluation;
}

string Pelicula::getNombre(){
	return nombre;
}
