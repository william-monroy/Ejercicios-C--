#include <iostream>
#include "EscrituraDatos.h"
#include "LecturaDatos.h"

using namespace std;

int main() {

    string entrada = readString("Introduce tu nombre");

    print(entrada);



    return 0;
}