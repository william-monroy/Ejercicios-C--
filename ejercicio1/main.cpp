#include <iostream>
#include "LecturaDatos.h"   //Llamamos a nuestra Libreria
#include "EscrituraDatos.h" //Llamamos a nuestra Libreria
#include <windows.h>
#include <string>
#include <ctype.h>  //Libreria de Conversion a Mayusculas y Minusculas
#include <wchar.h>  //Libreria con soporte para varios tipos de caracteres
#include <locale.h> //Libreria que soporta varios formatos

int main()
{

    setlocale(LC_ALL, ""); //Soporte para caracteres especiales
    system("color 02");    //Cambia el color de la ventana

    // DECLARACION DE VARIABLES
    double banco = 1000000;

    // INGRESO DE DATOS
    escribirln("Ingreso de Trabajadores:");
    escribirln("");
    int num_trab = leerInt("Numero de Trabajadores a ingresar: ");

    string cod_trab[num_trab]; //Código del trabajador

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        int indice = i + 1;
        string str = to_string(indice); //Convertimos el numero actual a string
        cod_trab[i] = "E00" + str;      //Lo juntamos para obtener el codigo
    }

    string nom_trab[num_trab];       //Nombre del trabajador
    int edad_trab[num_trab];         //Edad
    string sex_trab[num_trab];       //Sexo
    string tpcont_trab[num_trab];    //Tipo de contrato
    string cat_trab[num_trab];       //Categoría del trabajador
    double htrab_trab[num_trab];     //Cantidad de horas trabajadas
    double hextrtrab_trab[num_trab]; //Cantidad de horas extra trabajadas
    double trfnormal_trab[num_trab]; //Tarifa por hora en horario normal

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        system("cls");
        escribirln("Trabajador " + cod_trab[i]);
        escribirln("");
        nom_trab[i] = aMayuscula(leerString("Nombre: "));
        edad_trab[i] = leerInt("Edad: ");
        sex_trab[i] = aMayuscula(leerString("Sexo: "));
        tpcont_trab[i] = aMayuscula(leerString("Tipo de Contrato: "));
        cat_trab[i] = aMayuscula(leerString("Categoria: "));
        htrab_trab[i] = leerDouble("Horas Trabajadas: ");
        if (htrab_trab[i] > 80)
        {
            hextrtrab_trab[i] = 80 - htrab_trab[i];
        }
        else
        {
            hextrtrab_trab[i] = 0;
        }
        trfnormal_trab[i] = leerDouble("Tarifa Normal: ");
    }

    //CALCULO DE SUELDOS

    double trfextra_trab[num_trab];  //Tarifa por hora extra
    double salbasico_trab[num_trab]; //Salario Basico (sin Bonificacion)
    double bonif_trab[num_trab];     //Bonificacion
    double salbruto_trab[num_trab];  //Salario Bruto (Salario Basico + Bonificacion)
    double descuento_trab[num_trab]; //Descuento( 7% del Salario Bruto )
    double salneto_trab[num_trab];   //Salario Neto(Salario Bruto - Descuento)

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        if (hextrtrab_trab[i] != 0)
        {
            trfextra_trab[i] = (trfnormal_trab[i] * 0.5) + trfnormal_trab[i];
        }
        else
        {
            trfextra_trab[i] = 0;
        }
    }

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        if (hextrtrab_trab[i] == 0)
        {
            salbasico_trab[i] = htrab_trab[i] * trfnormal_trab[i];
        }
        else
        {
            salbasico_trab[i] = ((htrab_trab[i] - hextrtrab_trab[i]) * trfnormal_trab[i]) + (hextrtrab_trab[i] * trfextra_trab[i]);
        }
    }

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        if (tpcont_trab[i] == "CONTRATADO")
        {
            if (cat_trab[i] == "A")
            {
                bonif_trab[i] = salbasico_trab[i] * 0.15;
            }
            else if (cat_trab[i] == "B")
            {
                bonif_trab[i] = salbasico_trab[i] * 0.10;
            }
            else if (cat_trab[i] == "C")
            {
                bonif_trab[i] = salbasico_trab[i] * 0.05;
            }
        }
        else if (tpcont_trab[i] == "NOMBRADO")
        {
            if (cat_trab[i] == "A")
            {
                bonif_trab[i] = salbasico_trab[i] * 0.30;
            }
            else if (cat_trab[i] == "B")
            {
                bonif_trab[i] = salbasico_trab[i] * 0.25;
            }
            else if (cat_trab[i] == "C")
            {
                bonif_trab[i] = salbasico_trab[i] * 0.20;
            }
        }
    }

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        salbruto_trab[i] = salbasico_trab[i] + bonif_trab[i];
    }

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        descuento_trab[i] = salbruto_trab[i] * 0.07;
    }

    for (int i = 0; i < num_trab; i++)
    { //Bucle que se repite de acuerdo al numero de trabajadores
        salneto_trab[i] = salbruto_trab[i] - descuento_trab[i];
    }

    bool continuar = true;

    while (continuar)
    {
        system("cls");
        escribirln("===========================");
        escribirln("===========MENU============");
        escribirln("===========================");
        escribirln("1)Trabajador con mayor sueldo neto");
        escribirln("2)Trabajador de mayor edad");
        escribirln("3)Cantidad de Trabajadores Contratados y Nombrados");
        escribirln("4)Cantidad de Trabajadores que tienen horas extras");
        escribirln("5)Monto total de bonificación de trabajadores varones Nombrados");
        escribirln("6)Monto total de sueldo a desembolsar de trabajadores Contratados varones");
        escribirln("7)Monto total de sueldo a desembolsar de trabajadores Nombrados entre 30 y 40 años");
        escribirln("8)Monto total de sueldo a desembolsar de trabajadores Contratados categoría B y C");
        escribirln("9)Monto total de sueldo a desembolsar de mujeres de la categoría A, entre 20 y 30 años");
        escribirln("10)Monto final en el Banco, luego de desembolsar el pago del Salario Neto de los trabajadores");
        escribirln("11)Salir");
        escribirln("");
        int opcion = leerInt("OPCION: ");
        switch (opcion)
        {
        case 1:
        {
            system("cls");
            double mayor;
            int indice;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (i == 0)
                {
                    mayor = salneto_trab[i];
                    indice = i;
                }
                else if (salneto_trab[i] > mayor)
                {
                    mayor = salneto_trab[i];
                    indice = i;
                }
            }
            escribirln("El empleado con mayor Sueldo es: " + nom_trab[indice]);
            system("pause");
            break;
        }
        case 2:
        {
            system("cls");
            double mayor = 0;
            int indice = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (i == 0)
                {
                    mayor = edad_trab[i];
                    indice = i;
                }
                else if (edad_trab[i] > mayor)
                {
                    mayor = edad_trab[i];
                    indice = i;
                }
            }
            escribirln("El empleado con mayor Edad es: " + nom_trab[indice]);
            system("pause");
            break;
        }
        case 3:
        {
            system("cls");
            int cant_nom;
            int cant_cont;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (tpcont_trab[i] == "NOMBRADO")
                {
                    cant_nom++;
                }
                else
                {
                    cant_cont++;
                }
            }
            escribirln("Hay " + to_string(cant_nom) + " Trabajadores Nombrados");
            escribirln("Hay " + to_string(cant_cont) + " Trabajadores Contratados");
            system("pause");
            break;
        }
        case 4:
        {
            system("cls");
            int contador = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (hextrtrab_trab[i] > 0)
                {
                    contador++;
                }
            }
            escribirln("Hay " + to_string(contador) + " Trabajadores con horas extra");
            system("pause");
            break;
        }
        case 5:
        {
            system("cls");
            double sum = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (sex_trab[i] == "MASCULINO" && tpcont_trab[i] == "NOMBRADO")
                {
                    sum = sum + bonif_trab[i];
                }
            }
            escribirln("El monto total es: " + to_string(sum));
            system("pause");
            break;
        }
        case 6:
        {
            system("cls");
            double sum = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (sex_trab[i] == "MASCULINO" && tpcont_trab[i] == "CONTRATADO")
                {
                    sum = sum + bonif_trab[i];
                }
            }
            escribirln("El monto a desembolsar es: " + to_string(sum));
            system("pause");
            break;
        }

        case 7:
        {
            system("cls");
            double sum = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (edad_trab[i] >= 30 && edad_trab[i] <= 40 && tpcont_trab[i] == "NOMBRADO")
                {
                    sum = sum + bonif_trab[i];
                }
            }
            escribirln("El monto a desembolsar es: " + to_string(sum));
            system("pause");
            break;
        }
        case 8:
        {
            system("cls");
            double sum = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (cat_trab[i] == "B" || cat_trab[i] == "C" && tpcont_trab[i] == "CONTRATADO")
                {
                    sum = sum + bonif_trab[i];
                }
            }
            escribirln("El monto a desembolsar es: " + to_string(sum));
            system("pause");
            break;
        }
        case 9:
        {
            system("cls");
            double sum = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                if (sex_trab[i] == "FEMENINO" && cat_trab[i] == "A" && edad_trab[i] >= 20 && edad_trab[i] <= 30)
                {
                    sum = sum + bonif_trab[i];
                }
            }
            escribirln("El monto a desembolsar es: " + to_string(sum));
            system("pause");
            break;
        }
        case 10:
        {
            system("cls");
            double desembolsar = 0;
            for (int i = 0; i < num_trab; i++)
            { //Bucle que se repite de acuerdo al numero de trabajadores
                desembolsar = desembolsar + salneto_trab[i];
            }
            double restante = banco - desembolsar;
            escribirln("El monto restante es de: " + to_string(restante));
            system("pause");
            break;
        }
        case 11:
        {
            continuar = false;
            escribirln("Saliendo...");
            system("pause");
            break;
        }
        default:
        {
            escribirln("Error: Opcion Incorrecta") break;
        }
        }
    }

    return 0;
}
