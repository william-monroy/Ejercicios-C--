
#include "Persona.h"

class CtaBanc
{
public:
    CtaBanc();
    // 1) Constructor con parámetros
    CtaBanc(Persona cli, double sal);
    // 2) Método de acceso para atributo cliente
    Persona getCliente();
    // 3) Método de modificación para atributo cliente
    void setCliente(Persona cliente);
    void setSaldo(double s);
    double getSaldo();

private:
    Persona cliente;
    double saldo;
};

// 4) Implementa el constructor default
CtaBanc::CtaBanc()
{
    Persona def;
    this->cliente = def;
    this->saldo = 0;
}

// 5) Implementa el constructor con parámetros
CtaBanc::CtaBanc(Persona cli, double sal)
{
    this->cliente = cli;
    this->saldo = sal;
}

// 6) Implementa el método de acceso para cliente
Persona CtaBanc::getCliente()
{
    return this->cliente;
}

// 7) Implementa el método de modificación para cliente
void CtaBanc::setCliente(Persona cliente)
{
    this->cliente = cliente;
}

void CtaBanc::setSaldo(double s)
{
    saldo = s;
}

double CtaBanc::getSaldo()
{
    return saldo;
}
