/** ~~~ Dibuja Fractal ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include<Node.h>
#include<LinkedList.h>
using namespace std;

void DibujaFractal(LinkedList miCurva, String fractal){
    // Atributos
    ListaCurvas = miCurva;
    tipoFractal = fractal;
    int largeLine = 1;
    int tam = ListaCurvas.getSize();
    int inicioX = 1000;
    int inicioY = 200;
    int finalX  = 1000 + tamLinea;
    int finalY  = 200;
    /** Puntos Cardinales
        1 = norte
        2 = este
        3 = sur
        4 = oeste
    */
    int puntCard = 2;
    // Procede Dibujo
    line(inicioX,inicioY,finalX,finalY);

    for(int i=0; i < tam; i++)
    {
        inicioX = finalX;
        inicioY = finalY;
        if (ListaCurvas.getElement() == 'D'){
            switch (puntCard){
                case 1:
                    puntCard = 2;
                    finalX = finalX + largeLine;
                break;

                case 2:
                    puntCard = 3;
                    finalY = finalY + largeLine;
                break;

                case 3:
                    puntCard = 4;
                    finx = finx - largeLine;
                break;

                case 4:
                    puntCard = 1;
                    finalY = finalY - largeLine;
                break;
            }
        }
        else{
            switch (puntCard){
                case 1:
                    puntCard = 4;
                    finalX = finalX - largeLine;
                break;

                case 2:
                    puntCard = 1;
                    finalY = finalY - largeLine;
                break;

                case 3:
                    puntCard = 2;
                    finalX = finalX + largeLine;
                break;

                case 4:
                    puntCard = 3;
                    finalY = finalY + largeLine;
                break;
            }
        }
        //SetColorSpace(white);
        line(inix,iniy,finx,finy);
        ListaCurvas.next();
    }
};