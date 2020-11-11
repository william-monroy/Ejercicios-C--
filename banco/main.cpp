#include <iostream>
#include <stdlib.h>
#include "Cuenta.h"

using namespace std;

int main()
{

    // Cuentas creadas
    Cuenta william("William", "Monroy", 725624547, 1234, 1000.0);

    int op, pin_in;
    bool cont = true;
    double monto;

    cout << "Introduce tu PIN: ";
    cin >> pin_in;
    while (pin_in != william.getPassword())
    {
        cout << "PIN incorrecto, vuelve a intentarlo.";
        cout << "Introduce tu PIN: ";
        cin >> pin_in;
    }
    while (cont)
    {
        system("cls");
        cout << "=========================================" << endl;
        cout << "==============MENU BANCOMEX==============" << endl;
        cout << "=========================================\n"<< endl;
        cout << "1)Consulta de Saldo" << endl;
        cout << "2)Retiro" << endl;
        cout << "3)Depósito" << endl;
        cout << "4)Cambio de PIN" << endl;
        cout << "5)Salir\n"<< endl;
        cout << "OPCION: ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            system("cls");
            cout << "Consulta de Saldo\n"<< endl;
            william.mostrarDatos();
            system("pause");
            break;
        }
        case 2:
        {
            system("cls");
            cout << "Retiro\n";
            cout << "Monto: ";
            cin >> monto;
            double saldo = william.getSaldo();
            william.setSaldo(saldo - monto);
            break;
        }
        case 3:
        {
            system("cls");
            cout << "Deposito\n";
            cout << "Monto: ";
            cin >> monto;
            double saldo = william.getSaldo();
            william.setSaldo(saldo + monto);
            break;
        }
        case 4:
        {
            system("cls");
            cout << "Cambio de PIN\n"<< endl;
            int pin_temp, pin_nuevo;
            cout << "Introduce tu PIN: ";
            cin >> pin_temp;
            while (pin_temp != william.getPassword())
            {
                cout << "PIN incorrecto, vuelve a intentarlo.";
                cout << "Introduce tu PIN: ";
                cin >> pin_temp;
            }
            cout << "Introduce nuevo PIN: ";
            cin >> pin_nuevo;
            william.setPassword(pin_nuevo);
            break;
        }
        case 5:
        {
            system("cls");
            cout << "\nGracias por visitarnos" << endl;
            cont = false;
            break;
        }
        default:
        {
            cout << "ERROR: Opcion Incorrecta\n"<< endl;
            system("pause");
            break;
        }
        }
    }

    return 0;
}