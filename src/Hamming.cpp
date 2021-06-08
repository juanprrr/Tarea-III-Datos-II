//
// Created by juanpr on 8/6/21.
//

#include "Hamming.h"
Hamming::Hamming() {
    data[0] = 1;
    data[1] = 0;
    data[2] = 1;
    data[4] = 0;
    printf("\nDato a codificar\n");
    for(i = 0; i < 4; i++)
        printf("%d",data[i]);

}
void Hamming::runHamming(){
    //Calculo de la paridad par con XOR
    data[6] = data[0] ^ data[2] ^ data[4];
    data[5] = data[0] ^ data[1] ^ data[4];
    data[3] = data[0] ^ data[1] ^ data[2];

    printf("\nDato codificado\n");
    for(i = 0; i < 7; i++)
        printf("%d",data[i]);
        dataRecv[i] = data[i];

    printf("\nProcesando recibido\n");
    c1 = dataRecv[6] ^ dataRecv[4] ^ dataRecv[2] ^ dataRecv[0];
    c2 = dataRecv[5] ^ dataRecv[4] ^ dataRecv[1] ^ dataRecv[0];
    c3 = dataRecv[3] ^ dataRecv[2] ^ dataRecv[1] ^ dataRecv[0];
    c = c3*4 + c2*2 + c1 ;

    if(c == 0) {
        printf("\n No hay error durante la transmisiòn de datos\n");
    }
    else {
        printf("\nError en la posiciòn %d",c);

        printf("\nDato correcto es: \n");

//Se cambia por 1 o 0 segùn el dato erroneo
        if(dataRecv[7 - c] == 0)
            dataRecv[7 - c] = 1;
        else
            dataRecv[7 - c] = 0;
        for (i = 0; i < 7; i++) {
            printf("%d", dataRecv[i]);
        }
    }
}


