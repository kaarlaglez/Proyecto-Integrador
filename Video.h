//CLASE VIDEO
#include <string>
#include <iostream>

using namespace std;

class Video{

public:
	int ID;
    string nombre;
    float duracion;
    string genero;
    
    //constructor por default
    Video();
    
   // m�todo que se sobrecargar� en clases hijas
    virtual int evaluacion();
    
    //getter
    string getNombre();
 
};
