#include <iostream>

using namespace std;

class Empleado
{
private:
    int idEmpleado;
    string nombre;
    int numDpto;

public:
    Empleado(int idEmp, string nom, int numDpto);
    Empleado();
    int getIdEmpleado();
    void setIdEmpleado(int idEmpleado);
    string getNombre();
    void setNombre(string nombre);
    int getNumDpto();
    void setNumDpto(int numDpto);
};

Empleado::Empleado(){
    this->idEmpleado=0;
    this->nombre="-";
    this->numDpto=0;
}

Empleado::Empleado(int idEmp, string nom, int numDpto)
{
    this->idEmpleado=idEmp;
    this->nombre=nom;
    this->numDpto=numDpto;
}

int Empleado::getIdEmpleado()
{
    return this->idEmpleado;
}
void Empleado::setIdEmpleado(int idEmpleado)
{
    this->idEmpleado = idEmpleado;
}

string Empleado::getNombre()
{
    return this->nombre;
}
void Empleado::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Empleado::getNumDpto()
{
    return this->numDpto;
}
void Empleado::setNumDpto(int numDpto)
{
    this->numDpto = numDpto;
}