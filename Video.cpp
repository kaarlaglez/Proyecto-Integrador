#include "Video.h"

Video::Video(){
    ID = 0;
    nombre = "No disponible";
    duracion = 0;
    genero = "No asignado";
}

Video::Video(int ID, string nombre, float duracion, string genero){
    this->ID = ID;
    this->nombre = nombre;
    this->duracion = duracion;
    this->genero = genero;
}

void Video::evaluacion(){
    
}