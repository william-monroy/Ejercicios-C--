#include <iostream>
#include <string>
using namespace std;

int readInt(string txt)
{
    int dato;
    cout << txt;
    cin >> dato;
    return dato;
}

int readInt()
{
    int dato;
    cin >> dato;
    return dato;
}

double readDouble(string txt)
{
    double dato;
    cout << txt;
    cin >> dato;
    return dato;
}

double readDouble()
{
    double dato;
    cin >> dato;
    return dato;
}

string readString(string txt)
{
    string dato;
    cout << txt;
    cin >> dato;
    return dato;
}

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

string read(string txt)
{
    string dato;
    cout << txt;
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

void adrianln(string dato)
{
    cout << dato << endl;
}

void adrian(string dato)
{
    cout << dato;
}

void adrianln(int dato)
{
    cout << dato << endl;
}

void adrian(int dato)
{
    cout << dato;
}

void adrianln(double dato)
{
    cout << dato << endl;
}

void adrian(double dato)
{
    cout << dato;
}

void adrianln(float dato)
{
    cout << dato << endl;
}

void adrian(float dato)
{
    cout << dato;
}

void adrianln(char dato)
{
    cout << dato << endl;
}

void adrian(char dato)
{
    cout << dato;
}




//                     3            3
double arturo(double base, double expo)
{
    if(expo==0){
        return 1;
    }
    else{
        double guardar = 0;
        for (int i = 1; i < expo; i = i + 1)
        {
            if(i==1){
                guardar=base*base;
            }else{
                guardar = guardar*base;
            }
        }
        return guardar;
    }

}


int input(string texto){
    int numero;
    cout << texto;
    cin >> numero;
    return numero;
}