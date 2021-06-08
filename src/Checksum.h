//
// Created by juanpr on 8/6/21.
//

#ifndef TAREA_III_DATOS_II_CHECKSUM_H
#define TAREA_III_DATOS_II_CHECKSUM_H
#include <iostream>
#include <string.h>
using namespace std;
class Checksum {
    /**
     * @class Esta clase representa un ejemplo de algoritmo para la detecciòn
     * de errores llamado Checksum, en el cual se utilizara un bloque de 12 bits
     * 101101 110010
     */
private:
    char a[20] = "101101"; //Subsecciòn 1 del bloque
    char b[20] = "110010"; //Subsecciòn 2 del bloque
    char sum[20]; //Suma de bloques
    char complement[20]; //Complemento de la suma de bloques
    int i;
public:
    /**
     * @brief Mètodo que realiza la suma binaria y calcula el checksum
     * de las subsecciones del bloque de acuerdo
     * con los siguientes casos:
     * a. Si ambos bits son 0 y el acarreo es 0, suma = 0 y acarreo = 0
     * b. Si ambos bits son 0 y el acarreo es 1, suma = 1 y acarreo = 0
     * c. Si ambos bits son 1 y el acarreo es 0, suma = 0 y acarreo = 1
     * d. Si ambos bits son 1 y el acarreo es 1, suma = 1 y acarreo = 1
     * e. Si cualquiera de los bits es 1 y el acarreo es 0, suma = 1 y acarreo = 0
     * f. Si cualquiera de los bits es 1 y el acarreo es 1, suma = 0 y acarreo = 1
     */
    void Add();
};


#endif //TAREA_III_DATOS_II_CHECKSUM_H
