#include <iostream>
#include "Checksum.h"
#include "CRC.h"
#include "Hamming.h"
int main() {
    printf("Ejemplo de checksum ");
    Checksum *checksumExample = new Checksum();
    checksumExample->Add();
    printf("\nEjemplo de Hamming \n");
    Hamming *hammingExample = new Hamming();
    hammingExample->runHamming();
    printf("\nEjemplo de Cyclic Redundant Check \n");
    CRC *crcExample = new CRC();
    crcExample->runCRC();
    return 0;
}
