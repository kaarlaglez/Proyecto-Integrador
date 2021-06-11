//proyecto Integrador.
//Equipo 7:
// Brenda Cristina Y�piz Moreno A01633793
// Daniela Berenice Hern�ndez de Vicente A01735346
// Diego Kury Rivera A00227097
// Juan Manuel Gonz�lez Ascencio A00572003
//Karla Gonz�lez S�nchez A01541526

/*Funcionalidad del programa:

1) Realiza en un bucle for el llenado de un arreglo de 3 series donde cada una contiene 3
temporadas con 3 episodios, as� como su nombre, ID, etc.

2) cada temporada tiene un valor de evaluaci�n, que al final se promedian las 3 temporadas de cada serie
con un el m�todo de evaluaci�n sobrecargado en la clase hija de serie

3) para las pel�culas se crea un arreglo manualmente

4) estos arreglos se quedan guardados en la videoteca para generar un objeto de tipo videoteca
*/

#include <string>
#include <iostream>
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
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Episodio.h"
#endif 
/*
#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif*/
#ifndef PELICULA_H
#define PELICULA_H
#include "Pelicula.h"
#endif
#include <iostream>
#include <string>

using namespace std;

int main() {
  int nEpisodiosTot=27;
  int nTemporadasTot=9;
  int nSeriesTot=3,nPelis=3;
  int temp,evalu,sery;
  Episodio e;
 // Temporada t;
  string aux2="";
  
  /*declaramos los arreglos de episodios y temporadas que se ir�n redefiniendo en un ciclo for a continuaci�n para poder
  llenar el arreglo de series
  */
  Episodio arrEpisodios[nSeriesTot];
  Temporada arrTemps[nSeriesTot];
  
  //arreglo 3 series
  Serie arrSeries[nSeriesTot];
  
  /*estos arreglos servir�n en el ciclo for para asignarle un nombre a los episodios, en vez de hacer un int-to-string
  con los numeros solo se concaternar�a el string "Episodio" con estos n�meros en char "1","2","3"
  */
  string nums[]={"1","2","3"};
  string eNames[nEpisodiosTot];
  int eTemps[nEpisodiosTot];
  int index=0;
  
  //arreglos para rellenar los datos de las series en el ciclo for a continuaci�n
  string sNames[]={"Brooklyn 9-9","Skins","Gossip Girl"};
  int seriesID[]={22541,88552,63256};
  float durSeries[]={98520.0,2368741.5,35468.0};
  string *g1;
  g1= new string{"comedia"};
  
  string genSeries[]={*g1,"humor","romance"};
  
 	
  //la evaluaci�n de los videos es en un rango de 1-10
  
  //3 pel�culas
  Pelicula p1(58743,"Donnie Darko",90.0,"Sci-fi",10);
  //Pelicula *p1=new Pelicula(58743,"Donnie Darko",90.0,"Sci-fi",10);
  Pelicula p2(66987,"Y d�nde est�n las rubias",75.0,"Comedia",9);
  Pelicula p3(99856,"Clueless",85.0,"Romance-Comedia",8);
 // Pelicula *pnt1=p1;
  //arreglo peliculas
  Pelicula arrPelis[]={p1,p2,p3};
   

/*aqu� se generan los 27 episodios (en total) que son 3 episodios de cada temporada, y de cada serie son 3 temporadas
, por eso se emplean los 3 bucles de for anidados, cada uno representa serie, temporada y episodio
*/
 for(int i=0;i<nSeriesTot;i++){
  	for(int j=0;j<nSeriesTot;j++){
  		for(int k=0;k<nSeriesTot;k++){
  			eNames[k]="Episodio #"+nums[k];
  			string o="Episodio #"+nums[k];
  			
  			if(j==0){
  				temp=1;
	  		} else if(j==1){
	  			temp=2;
	  		} else if(j==2){
	  			temp=3;
	  		}
	  		
    		Episodio e(o,temp);
    		arrEpisodios[k]=e;
  		}
  		
  		//condicional para dar el valor de temporada al crear el objeto de temporada y agregarlo al arreglo de temporadas
  		//de cada serie
  		if(i==0){
  				sery=1;
	  		} else if(i==1){
	  			sery=2;
	  		} else if(i==2){
	  			sery=3;
	  		}
  	/*	cout<<"Ingrese evaluaci�n para la temporada "<<j+1<<" de la serie "<<sNames[sery]<<": "<<endl;
  		cin>>evalu;*/
  		evalu=j+i+2;
		Temporada t(arrEpisodios,evalu,3); 	
  		 arrTemps[j]=t;
	  }
	  
	//  Serie(int _ID,string _nombre,float _duracion,string _genero,int _nEpisodios,int _nTemps,Temporada * arr){
	  
	  Serie s(seriesID[i],sNames[i],durSeries[i],genSeries[i],nTemporadasTot,nSeriesTot,arrTemps); 	
  	  arrSeries[i]=s;
  	//  arrSeries[i].getSerie();
  	  arrSeries[i].evaluacion();
	  
  	}
  	
  //se crea 1 videoteca y se agregan arreglos 
  Videoteca v1(arrPelis,arrSeries,nPelis,nSeriesTot);
  v1.enlistar();
  	
}
