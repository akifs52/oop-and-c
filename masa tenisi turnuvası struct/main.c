#include <stdio.h>
#include <stdlib.h>
#define n 2
struct oyuncu
{
    char isim[10];
    char soyad[10];
    int yas;
    int seviye;
};

struct ekip
{
    char isim[15];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};

void oyuncuyu_olustur(struct oyuncu *karakter)
{
    printf("oyuncu adi:\n");
    scanf("%s", karakter->isim);
    printf("soyadi:\n");
    scanf("%s", karakter->soyad);
    printf("yas:\n");
    scanf("%d",&karakter->yas);
    printf("seviye:\n");            //yas ve seviye de dizi olmadýðý için adres iþareti koymalýyýz.
    scanf("%d",&karakter->seviye);


}

void oyuncuOzellik(struct ekip *ekipler)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("ekip %d:\n",i+1);
        printf("ekip adi:\t");
        scanf("%s",ekipler->isim);
        printf("oyuncu 1:\n");
        oyuncuyu_olustur(&ekipler->oyuncu1);
        printf("oyuncu 2:\n");
        oyuncuyu_olustur(&ekipler->oyuncu2);
    }

}

int main()
{
    struct ekip ekipler[n];

    oyuncuOzellik(&ekipler[n]);

    for(int i=0;i<n;i++)
    {
        printf("%d. ekip adi: %s ",i+1,ekipler[n].isim);
        printf("1.oyuncu:\n");
        printf("adi: %s\n",ekipler[n].oyuncu1.isim);
        printf("soyadi: %s\n",ekipler[n].oyuncu1.soyad);
        printf("yasi: %d\n",ekipler[n].oyuncu1.yas);
        printf("seviye:%d\n",ekipler[n].oyuncu1.seviye);
        printf("2.oyuncu:\n");
        printf("adi: %s\n",ekipler[n].oyuncu2.isim);
        printf("soyadi: %s\n",ekipler[n].oyuncu2.soyad);
        printf("yasi: %d\n",ekipler[n].oyuncu2.yas);
        printf("seviye:%d\n",ekipler[n].oyuncu2.seviye);
        printf("=====================================\n");

    }



    return 0;
}
