//
// Created by juanpr on 8/6/21.
//

#ifndef TAREA_III_DATOS_II_CRC_H
#define TAREA_III_DATOS_II_CRC_H
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class CRC {
    /**
     * @class Clase que representa un algoritmo de CRC-5
     * para codificar la palabra compuesta por los bits
     * 110010101
     */
private:
    char key[20] = "10101";
    char data[20] = "110010101";
    /**
     * @brief metodo que realiza operacion xor en dos caracteres dados
     * @param a primer elemento para el XOR
     * @param b segundo elemento para el XOR
     * @return el resultado segun la operacion xor
     */
    char exor(char a, char b);
public:
    CRC();
    /**
     * @brief Metodo que ejecuta las operaciones respectivas de
     * division binaria con XOR y las concatenaciones al dato para
     * poder codificarlo
     */
    void runCRC();
};


#endif //TAREA_III_DATOS_II_CRC_H
