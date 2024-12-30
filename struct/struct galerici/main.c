#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct araba
{
    int soldOut;
    union {
        double fiyat;
        char marka[15];
    }bilgi;

};
int main()
{
    struct araba araba_A;
    araba_A.soldOut=0;
    strcpy(araba_A.bilgi.marka,"Anadol");


    araba_A.soldOut=1;
    araba_A.bilgi.fiyat=20000;



    return 0;
}
