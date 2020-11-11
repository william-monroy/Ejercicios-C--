#include <iostream>
#include <string>
using namespace std;

/*
	METODOS PARA LA LECTURA DE DATOS
*/

//Leer int con texto
int leerInt(string txt)
{
    int dato;
    cout << txt;
    cin >> dato;
    return dato;
}

//Leer int sin texto
int leerInt()
{
    int dato;
    cin >> dato;
    return dato;
}

//Leer double con texto
double leerDouble(string txt)
{
    double dato;
    cout << txt;
    cin >> dato;
    return dato;
}

//Leer double sin texto
double leerDouble()
{
    double dato;
    cin >> dato;
    return dato;
}

//Leer string con texto
string leerString(string txt)
{
    string dato;
    cout << txt;
    cin >> dato;
    return dato;
}

//Leer string sin texto
string leerString()
{
    string dato;
    cin >> dato;
    return dato;
}

string aMayuscula(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = toupper(cadena[i]);
    return cadena;
}
string aMinuscula(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = tolower(cadena[i]);
    return cadena;
}
