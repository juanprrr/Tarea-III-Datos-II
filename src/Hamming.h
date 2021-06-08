//
// Created by juanpr on 8/6/21.
//

#ifndef TAREA_III_DATOS_II_HAMMING_H
#define TAREA_III_DATOS_II_HAMMING_H
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Hamming {
    /**
     * @class Se presenta un ejemplo de algoritmo de hamming para
     * un bloque de 4 bits dado por 1010
     */
private:
    int data[10] ;
    int dataRecv[10],c,c1,c2,c3,i;

public:
/**
 * @brief Constructor que inicializa los valores para el bloque de datos
 * a enviar
 */
    Hamming();
    /**
     * @brief Metodo que ejecuta las revisiones de paridad para y genera el
     * bloque de datos codificado para enviarlo.
     */
    void runHamming();
};


#endif //TAREA_III_DATOS_II_HAMMING_H
