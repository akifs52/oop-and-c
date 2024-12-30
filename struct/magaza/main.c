#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 4

struct isciler
{
    char ad[10];
    char soyad[10];
    int yas;
};

struct urunler
{
    char referansKodu[10];
    int fiyat;
};

struct magazalar
{
    char magazaAdi[15];
    char sokak[15];
    char mahalle[15];
    char telefonNo[11];
    int satistutar;
    struct isciler isci1,isci2,isci3;
    struct urunler urun[M];

};
void urunu_olustur (struct urunler *urun)
{
    printf("referans kodu gir:\n");
    scanf("%s",urun->referansKodu);
    printf("fiyati gir:\n");
    scanf("%d",&urun->fiyat);
}

void isciyi_olustur(struct isciler *isciN)
{
    printf("isci adi: ");
    scanf("%s",isciN->ad);
    printf("soyadi: ");
    scanf("%s",isciN->soyad);
    printf("yasi: ",isciN->yas);
    scanf("%d",&isciN->yas); //bu ifade dizi deðil adres göstermediði için & kullanýlýr
}
void magaza_olustur(struct magazalar *allmagaza)
{
    printf("magazi adi: ");
    scanf("%s",allmagaza->magazaAdi);
    printf("magaza sokagi: ");
    scanf("%s",allmagaza->sokak);
    printf("magaza mahallesi: ");
    scanf("%s",allmagaza->mahalle);
    printf("magaza numarasi: ");
    scanf("%s", allmagaza->telefonNo);
    printf("satýs tutarý: ");
    scanf("%d",&allmagaza->satistutar);
    printf("isci 1:\n");
    isciyi_olustur(&allmagaza->isci1);
    printf("isci 2:\n");
    isciyi_olustur(&allmagaza->isci2);
    printf("isci 3:\n");
    isciyi_olustur(&allmagaza->isci3);
    for(int i=0;i<M;i++)
    {
        printf("urunlerinizi giriniz:\n");
        urunu_olustur(&allmagaza->urun[i]);
    }
}
void bastir_isci (struct isciler *isciNN)
{
    printf("adi: %s\n",isciNN->ad);
    printf("soyadi: %s\n",isciNN->soyad);
    printf("yas: %d\n",isciNN->yas);
}

void bastir_urunler(struct urunler *urun)
{
    printf("referans kodu: %s\n",urun->referansKodu);
    printf("fiyat: %d",urun->fiyat);
}

void bastir_magaza(struct magazalar *magazaN)
{
    printf("magaza ismi: %s\n",magazaN->magazaAdi);
    printf("magaza mahallesi: %s\n",magazaN->mahalle);
    printf("magaza sokagi: %s\n",magazaN->sokak);
    printf("telefon no: %s\n",magazaN->telefonNo);
    printf("tutar: %d\n",magazaN->satistutar);
    printf("isci 1 adi:\n");
    bastir_isci(&magazaN->isci1);
    printf("isci 2 adi:\n");
    bastir_isci(&magazaN->isci2);
    printf("isci 3 adi:\n");
    bastir_isci(&magazaN->isci3);
    for(int i=0;i<M;i++)
    {
        printf("urunler:\n");
        bastir_urunler(&magazaN->urun[i]);
    }
}

int main()
{
    int i;

    struct magazalar allmagaza[N];

    for(i=0;i<N;i++)
    {
        printf("%d. magaza:\n",i+1);
        magaza_olustur(&allmagaza[i]);

    }

    for (i=0;i<N;i++)
    {
      printf("%d. magaza:\n",i+1);
      bastir_magaza(&allmagaza[i]);

    }

    return 0;
}
