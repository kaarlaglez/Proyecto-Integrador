//Clase EPISODIO
#include <iostream>
#include <string>

using namespace std;

class Episodio {
  private:
    string titulo;
    int numTemporada;

  public: 
    Episodio(string,int);
    void getEpisodio();
    string get_titulo(){
	return titulo;
	}
    int get_numTemporada(){return numTemporada;}
    Episodio();

};
