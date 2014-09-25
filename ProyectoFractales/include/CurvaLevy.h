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
    //int sizeLista;
    // Si esta vac�a, inicia en D
    {
            for (int i = 3; i <= pIteracion; i++)
            {
                int sizeMiLista = miListaItera.getSize();
                miListaItera.goToStart();
                for (int pos = 0; pos < sizeMiLista; pos++)
                {
                    miListaItera.goToPos(pos);
                    char elemento = miListaItera.getElement();
                    if (elemento == 'A')
                    {
                        int posActual = miListaItera.getPos();
                        miListaItera.insert('D');
                        miListaItera.insert('A');
                        miListaItera.insert('I');
                        miListaItera.insert('I');
                        miListaItera.insert('A');
                        miListaItera.insert('D');
                        miListaItera.goToPos(posActual+6);
                        miListaItera.remove();
                    }
                }
            }


    } // End Switch
    return miListaItera;
};
