#include <iostream>
using namespace std;

#include "Coord.h"

class Circulo
{
private:
    Coord centro;
    int radio;

public:
    Circulo();
    Circulo(Coord centro, int radio);
    Coord getCentro();
    void setCentro(Coord centro);
    int getRadio();
    void setRadio(int radio);
    void print();
};

Circulo::Circulo()
{
    Coord c(1, 1);
    this->centro = c;
    this->radio = 1;
}

Circulo::Circulo(Coord centro, int radio)
{
    this->centro = centro;
    this->radio = radio;
}

Coord Circulo::getCentro()
{
    return this->centro;
}
void Circulo::setCentro(Coord centro)
{
    this->centro = centro;
}

int Circulo::getRadio()
{
    return this->radio;
}
void Circulo::setRadio(int radio)
{
    this->radio = radio;
}

void Circulo::print()
{
    cout << "Centro ->";
    this->centro.print();
    cout << ", Radio ->" << this->radio << endl;
}