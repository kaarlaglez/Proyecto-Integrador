//Clase película
#include <string>
#include <iostream>
#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif
using namespace std;


class Pelicula:public Video{
  private:
    int evaluation;
public:
  Pelicula(int,string,float,string,int);
  Pelicula();
  void getPelicula();
  string getNombre();
  
  //sobrecarga de evaluacion
  int evaluacion();
};

