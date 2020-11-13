#include <iostream>

using namespace std;

class Departamento
{
private:
    int idDpto;
    string nombreDpto;
public:
    Departamento(int idDpto, string nomDpto);
    Departamento();
    int getIdDpto();
    void setIdDpto(int idDpto);
    string getNombreDpto();
    void setNombreDpto(string nombreDpto);
};

Departamento::Departamento(){
    this->idDpto=0;
    this->nombreDpto="-";
}

Departamento::Departamento(int idDpto, string nomDpto)
{
    this->idDpto=idDpto;
    this->nombreDpto=nomDpto;
}

int Departamento::getIdDpto()
{
    return this->idDpto;
}

void Departamento::setIdDpto(int idDpto)
{
    this->idDpto = idDpto;
}

string Departamento::getNombreDpto()
{
    return this->nombreDpto;
}

void Departamento::setNombreDpto(string nombreDpto)
{
    this->nombreDpto = nombreDpto;
}
