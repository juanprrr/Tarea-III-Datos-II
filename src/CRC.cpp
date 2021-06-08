//
// Created by juanpr on 8/6/21.
//

#include "CRC.h"
char CRC::exor(char a, char b){
    if(a == b)
        return '0';
    else
        return '1';
}
void CRC::runCRC(){
    int datalen = strlen(data);
    int keylen = strlen(key);

    for(int i = 0;i < keylen - 1 ; i++) //concatenar n-1 ceros al dato
        data[datalen+i] =  '0';
    data[datalen + keylen - 1 ] = '\0';

    int codelen = datalen + keylen - 1; //Dividendo: longitud del dato con los ceros concatenados

    char temp[20],rem[20];

    for(int i = 0; i < keylen ; i++)
        rem[i] = data[i];                    //Se consideran los i-esimos bits para hacer division/EXOR

    for(int j = keylen ; j <= codelen ;j++) {
        for( int i = 0; i < keylen ; i++)
            temp[i] = rem[i];                // residuo actual en cada paso de la division

        if(rem[0] == '0'){                //si el primer bit del residuo es 0 se corre una posiciòn
            for(int i = 0; i < keylen - 1 ; i++)
                rem[i]=temp[i+1];
        }
        else{                    //De otra forma operar el key con el dividendo

            for(int i = 0; i < keylen-1; i++)
                rem[i]=exor(temp[i+1],key[i+1]);

        }
        if(j != codelen)
            rem[keylen-1] = data[j];        //se concatena cada bit del residuo obtenido para formar la cadena
        else
            rem[keylen-1] = '\0';
    }

    for(int i=0;i<keylen-1;i++)
        data[datalen+i]=rem[i];                //se reemplazan los ceros inicialmente agregados
                                                // al dato con el residuo CRC obtenido
    data[codelen] = '\0';
    cout<<"CRC = "<< rem <<"\nPalabra = "<< data;
}

CRC::CRC() {
    cout << "El dato a codificar: " << data << endl;
    cout << "Los coeficientes del polinomio para dividir: " << key << endl;
}
