//Clase película
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

//Constructor con parámetros
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
  genero="SIN GÉNERO";
  evaluation=0;
}


//muestra datos de la pelicula
void Pelicula::getPelicula(){
  cout<<"\nNombre pelicula: "<<nombre<<endl;
  cout<<"ID pelicula: "<<ID<<endl;
  cout<<"Duración pelicula (en mins): "<<duracion<<endl;
  cout<<"Género pelicula: "<<genero<<endl;
  cout<<"Evaluación pelicula: "<<evaluation<<endl;
}

int Pelicula::evaluacion(){
  return evaluation;
}

string Pelicula::getNombre(){
	return nombre;
}
