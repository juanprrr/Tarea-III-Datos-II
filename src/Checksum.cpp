//
// Created by juanpr on 8/6/21.
//

#include "Checksum.h"
void Checksum::Add(){
    if(strlen(a)==strlen(b)){
       int length = strlen(a);
        char carry='0';

        for(i=length-1;i>=0;i--)
        {
            if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                sum[i]='0';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='0' && b[i]=='1' && carry=='0')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='0' && b[i]=='1' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='0')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                sum[i]='1';
                carry='1';

            }
            else
                break;
        }

        printf("\nSum=%c%s",carry,sum);
        for(i=0;i<length;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
                complement[i]='0';
        }

        if(carry=='1')
            carry='0';
        else
            carry='1';

        printf("\nChecksum=%c%s\n",carry,complement);
    }
    else {
        printf("\nLos strings deben ser del mismo tamaño\n");
    }
}
