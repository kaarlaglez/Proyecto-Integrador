//CLASE VIDEO
#include<string>
#include <iostream>

#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif

using namespace std;

//constructor por default
Video::Video(){
    ID = 0;
    nombre = "No disponible";
    duracion = 0.0;
    genero = "No asignado";
}

//no se le agrega una acción como tal ya que sólo se establece para que se sobrecargue en las clases hijas
int Video::evaluacion(){
	return 0;
}

string Video::getNombre(){
	return nombre;
}


