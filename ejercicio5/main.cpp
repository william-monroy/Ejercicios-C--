#include <iostream>
#include <fstream>
#include "Departamento.h"
#include "Empleado.h"

using namespace std;

void cargarDatosEmp(Empleado listEmp[], int &cantEmp)
{
    int idEmp, idDpto;
    string nom;

    cout << "Numero de empleados a introducir: ";
    cin >> cantEmp;
    for (int i = 0; i < cantEmp; i++)
    {
        cout << "Id: ";
        cin >> idEmp;
        cout << "Nombre: ";
        cin >> nom;
        cout << "Id Dpto: ";
        cin >> idDpto;

        listEmp[i].setIdEmpleado(idEmp);
        listEmp[i].setNombre(nom);
        listEmp[i].setNumDpto(idDpto);
    }
}

void mostrarDatosEmp(Empleado lsitEmp[], int cantEmp)
{
    cout << endl <<"Empleados" << endl;
    for (int i = 0; i < cantEmp; i++)
    {
        cout << lsitEmp[i].getIdEmpleado() << "\t";
        cout << lsitEmp[i].getNombre() << "\t";
        cout << lsitEmp[i].getNumDpto() << endl;
    }
}

void cargarDatosDpto(Departamento listDpto[], int &cantDpto){
    int idDpto;
    string nom;
     
    ifstream archivo;
    archivo.open("Departamentos.txt");

    cantDpto = 0;
    while (archivo >>idDpto>>nom)
    {
        listDpto[cantDpto].setIdDpto(idDpto);
        listDpto[cantDpto].setNombreDpto(nom);  
        cantDpto++;
    }
    
    archivo.close();
}

void mostrarDatosDpto(Departamento lsitDpto[], int cantDpto)
{
    cout << endl <<"Departamentos" << endl;
    for (int i = 0; i < cantDpto; i++)
    {
        cout << lsitDpto[i].getIdDpto() << " ";
        cout << lsitDpto[i].getNombreDpto() << endl;
    }
}

int main()
{

    Empleado listaEmpleados[10];
    int cantEmp;

    Departamento listaDepartamentos[10];
    int cantDpto;

    cargarDatosDpto(listaDepartamentos,cantDpto);
    mostrarDatosDpto(listaDepartamentos,cantDpto);
    

    cargarDatosEmp(listaEmpleados,cantEmp);
    mostrarDatosEmp(listaEmpleados,cantEmp);

    return 0;
}