#include <string>
using namespace std;
class Video{

public:
    int ID;
    string nombre;
    float duracion;
    string genero;
    
public:
    Video();
    Video(int, string, float, string);
    virtual void evaluacion();
};