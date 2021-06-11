//CLASE VIDEOTECA
#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif
#ifndef SERIE_H
#define SERIE_H
#include "Serie.h"
#endif
#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Temporada.h"
#endif 
#ifndef VIDEOTECA_H
#define VIDEOTECA_H
#include "Videoteca.h"
#endif 
#ifndef PELICULA_H
#define PELICULA_H
#include "Pelicula.h"
#endif
#include <iostream>
#include <string>

using namespace std;

//constructores con parámetro y por default
Videoteca::Videoteca(Pelicula *arrp,Serie *arrs,int p,int s){
	arrPeli=arrp;
	arrSerie=arrs;
	numPelis=p;
	numSeries=s;
}

//en este método se usa un ciclo for para mostrar los datos de los arreglos de películas y de series
//es decir el contenido de la videoteca
void Videoteca::enlistar(){
	cout<<"\n______________________________CONTENIDO VIDEOTECA______________________________"<<endl;
	int t;
	//se pone en ciclos separados en caso de que sean de diferente dimensión los arreglos
	//es decir que puede que sean más películas que número de series o viceversa
	
	//ciclo para mostrar arreglo de peliculas
	for(int i=0;i<numPelis;i++){
	    cout<<"\nDatos película "<<i+1<<endl;
	    arrPeli[i].getPelicula();
	    arrPeli[i].evaluacion();
	}
	
	//ciclo para mostrar arreglo de series
	for(int j=0;j<numSeries;j++){
	    cout<<"\nDatos Serie :"<<arrSerie[j].getNombre()<<endl;
	    arrSerie[j].getSerie();
	    arrSerie[j].evaluacion();
	   // cout<<"Evaluacion: "<<t<<endl;
	}
	
	
}

