// tarea2_EquiposFutbol_progra3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{   //Declaracion de variables a ocupar
    srand(time(NULL));
    int equipo_seleccionado = rand() % 9;
    string equipo;
    int cantidad_partidos = 0;
    int goles_favorables = 0;
    int goles_contra = 0;
    int puntos_acumulados=0;
    

    //asignacion de equipos mediante un arreglo, asignacion de resultados
    string equipos[10] = {"Real Madrid","Barcelona","Betiz","Real S","Atletico M","Saragosa","Valencia","Sevilla","Cadiz","Herculez"};
    string resultados[] = {""};

    //impresion de los equipos listados
    cout << "Lista de equipos: " <<endl;
    for (int i = 0; i < 10; i++) {
        cout << equipos[i] << ",   ";
    }
    cout << endl;
    //Impresion del equipo que fue seleccionado alatoreamente por rand() %9
    equipo = equipos[equipo_seleccionado];
    cout << "El equipo seleccionado fue: "<<equipo << endl<<endl<<endl;
    cout << "Ingrese la cantidad de partidos a disputar el " << equipo << endl << endl << endl;
    cin >> cantidad_partidos;

    //Este for simulara los partidos, obtendra los resultados y puntos.
    for (int i = 0; i < cantidad_partidos; i++) {
        goles_favorables = rand() % 5;
        goles_contra = rand() % 5;
        
        if (goles_favorables > goles_contra) {
            puntos_acumulados = puntos_acumulados + 3;
            cout << i + 1 << " Partido, " << "Goles a favor: " << goles_favorables << ", Goles en contra: " << goles_contra << endl << endl;
            cout << "Partido Ganado suma 3 puntos" << endl << endl;
        
        }else if(goles_favorables<goles_contra){
            cout << i + 1 << " Partido, " << "Goles a favor: " << goles_favorables << ", Goles en contra: " << goles_contra << endl << endl;
            cout << "Partido Perdido no suma puntos" << endl << endl;
        }
        else {
            puntos_acumulados = puntos_acumulados + 1;
            cout << i + 1 << " Partido, " <<  "Goles a favor: " << goles_favorables << ", Goles en contra: " << goles_contra << endl << endl;
            cout << "Partido Empatado suma 1 punto" << endl << endl;
        }
    }
    cout <<"Cantidad de puntos logrados: "<<puntos_acumulados<<endl;

    system("pause");
    return 0;
}

