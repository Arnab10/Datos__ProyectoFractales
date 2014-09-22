#include <iostream>
#include <winbgim.h>
#include<Node.h>
#include<LinkedList.h>
#include <cstdlib>

// Using
using namespace std;
using namespace std;
using std::cout;
using std::cin;
using std::endl;
/**
    Funciones para hacer los fractales
*/
// Curva Dragon
void hacerDragon()
{
    // Presentaci�n
    cout << "---------------------------------------------" << endl;
    cout << "**-**-**-**-**-** Fractales **-**-**-**-**-**" << endl;
    cout << "**-**-**-**-**  Curva  Dragon  **-**-**-**-**" << endl;
    cout << "---------------------------------------------\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    cout << "Se dibujo un Fractal Curva de Dragon con " << cantIter << " iteraciones"  << endl;
}
// Curva Levy C
void hacerLevy()
{
    // Presentaci�n
    cout << "---------------------------------------------" << endl;
    cout << "**-**-**-**-**-** Fractales **-**-**-**-**-**" << endl;
    cout << "**-**-**-**   Curva  de  Levy  C  **-**-**-**" << endl;
    cout << "---------------------------------------------\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    cout << "Se dibujo un Fractal Curva de Levy C con " << cantIter << " iteraciones." << endl;

}
// Punta Flecha Sierpinski
void hacerFlechaS()
{
    // Presentaci�n
    cout << "---------------------------------------------" << endl;
    cout << "**-**-**-**-**-** Fractales **-**-**-**-**-**" << endl;
    cout << "**-**-** Punta de Flecha Sierpinski  **-**-**" << endl;
    cout << "---------------------------------------------\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    cout << "Se dibujo un Fractal Punta de Flecha Sierpinski con " << cantIter << " iteraciones."  << endl;

}
//Pausa para el menu
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}

// Men� del Programa
int main()
{
    bool bandera = false;
    char tecla;

    do{
        cout << "---------------------------------------------" << endl;
        cout << "**-**-**-**-**-** Fractales **-**-**-**-**-**" << endl;
        cout << "**-**-**-**-**-**   Curvas  **-**-**-**-**-**" << endl;
        cout << "---------------------------------------------\n" << endl << endl;
        cout << "\t1 . - Curva del Dragon" << endl;
        cout << "\t2 . - Punta de Flecha Sierpinski" << endl;
        cout << "\t3 . - Curva de Levy C\n" << endl;
        cout << "\t4 . - Salir" << endl;
        cout << "Elija una opcion: ";

        cin >> tecla;

		switch(tecla)
		{
			case '1':
				system("cls");
				cout << "Fractal Curva del Dragon.\n";
				hacerDragon();
				pausa();
				break;

			case '2':
				system("cls");
				cout << "Fractal Punta de Flecha Sierpinski.\n";
				hacerFlechaS();
				pausa();
				break;

			case '3':
				system("cls");
				cout << "Fractal Curva de Levy C.\n";
				hacerLevy();
				pausa();
				break;

            case '4':
				bandera=true;
				break;

            default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				pausa();
				break;
		}
    }    while(bandera != true);


    return 0;
};
