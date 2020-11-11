#include <iostream>
#include <string>
using namespace std;

/*
	METODOS PARA LA LECTURA DE DATOS
*/

//Leer int con texto
int readInt(string txt)
{
    int dato;
    cout << txt;
    cin >> dato;
    return dato;
}

//Leer int sin texto
int readInt()
{
    int dato;
    cin >> dato;
    return dato;
}

//Leer double con texto
double readDouble(string txt)
{
    double dato;
    cout << txt;
    cin >> dato;
    return dato;
}

//Leer double sin texto
double readDouble()
{
    double dato;
    cin >> dato;
    return dato;
}

//Leer string con texto
string readString(string txt)
{
    string dato;
    cout << txt;
    cin >> dato;
    return dato;
}

//Leer string sin texto
string readString()
{
    string dato;
    cin >> dato;
    return dato;
}

string read()
{
    string dato;
    cin >> dato;
    return dato;
}

string upper(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = toupper(cadena[i]);
    return cadena;
}
string lower(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = tolower(cadena[i]);
    return cadena;
}
