/** ~~~ Curva Levy C ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
using namespace std;
LinkedList<char> CurvaLevy(int pIteracion){
    // Atributos
    LinkedList <char> miListaItera;
    // Si esta vac�a, inicia en D
        for (int i = 0; i <= pIteracion; i++){
            int sizeMiLista = miListaItera.getSize();
            miListaItera.goToStart();
            for (int pos = 0; pos < sizeMiLista; pos++){
                miListaItera.goToPos(pos);
                char elemento = miListaItera.getElement();
                //std::cout << elemento;
                if (elemento == 'A'){
                    int posActual = miListaItera.getPos();
                    miListaItera.insert('D');
                    miListaItera.insert('A');
                    miListaItera.insert('I');
                    miListaItera.insert('I');
                    miListaItera.insert('A');
                    miListaItera.insert('D');
                    posActual += 6;
                    miListaItera.goToPos(posActual);
                    miListaItera.remove();
                }
            }
        }
    int sL = miListaItera.getSize();
    for (int i = 0; i < sL; i++)
    {
        miListaItera.goToPos(i);
        char elemL = miListaItera.getElement();
        std::cout << "-" << elemL ;
    }
    return miListaItera;
};
