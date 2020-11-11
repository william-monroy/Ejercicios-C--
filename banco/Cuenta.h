#include <iostream>
#include <cstring>

using namespace std;

class Cuenta
{

private:
    string nombres, apellidos;
    int dni, password;
    double saldo;

public:
    Cuenta(string nom, string ape, int dni, int pass, double saldo);
    ~Cuenta();
    string getNombre();
    string getApellido();
    int getDni();
    int getPassword();
    double getSaldo();
    void setNombre(string);
    void setApellido(string);
    void setDni(int);
    void setPassword(int);
    void setSaldo(double);
    void mostrarDatos();
};

Cuenta::Cuenta(string nom, string ape, int dni, int pass, double saldo)
{
    nombres = nom;
    apellidos = ape;
    this->dni = dni;
    password = pass;
    this->saldo = saldo;
}

Cuenta::~Cuenta()
{
}

string Cuenta::getNombre()
{
    return nombres;
}

string Cuenta::getApellido()
{
    return apellidos;
}

int Cuenta::getDni()
{
    return dni;
}

int Cuenta::getPassword()
{
    return password;
}

double Cuenta::getSaldo()
{
    return saldo;
}

void Cuenta::setNombre(string nom)
{
    nombres = nom;
}

void Cuenta::setApellido(string ape)
{
    apellidos = ape;
}

void Cuenta::setDni(int dni)
{
    dni = dni;
}

void Cuenta::setPassword(int pass)
{
    password = pass;
}

void Cuenta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

void Cuenta::mostrarDatos()
{
    std::cout << "Nombre: " << nombres << std::endl;
    std::cout << "Appelido: " << apellidos << std::endl;
    std::cout << "DNI: " << dni << std::endl;
    std::cout << "Saldo: " << saldo << std::endl;
}
