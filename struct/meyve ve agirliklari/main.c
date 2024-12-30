#include <stdio.h>
#include <stdlib.h>
#define N 2
#include <string.h>
struct meyveler
{
    char ad[10];
    float agirlik;
    char form;
    int kacTane;
    float birimFiyat;
    float tutar;
};

struct sepet
{
    struct meyveler m[N];
};

void bastir_tutar (struct sepet *st)
{
    printf("\n\n");
    struct meyveler fb[N];
    for(int i=0;i<N;i++)
    {
        printf("%d. meyve adi: %s\n",i+1,fb[i].ad);
        printf("%d. meyve tutari: %f\n",i+1,fb[i].tutar);
    }
}

void meyveler_cagir(struct meyveler *meler)
{
    meler->tutar=0.0;
    printf("\nmeyve adi:\n");
    scanf("%s",meler->ad);
    printf("meyve formu :\n");
    scanf("%s",meler->form);
    printf("meyve agirligi:\n");
    scanf("%f",&meler->agirlik);
    printf("kac tane aldin:\n");
    scanf("%d",&meler->kacTane);
    printf("birim fiyatini gir:\n");
    scanf("%f",&meler->birimFiyat);

    meler->tutar+=(meler->birimFiyat*meler->kacTane);

    if(meler->form==strcpy(meler->form,"yuvarlak"))
    {
        meler->tutar*=2.0;
    }

    if(meler->agirlik>0.2)
    {
        meler->tutar+=3.0;
    }







}
void sepet_cagir(struct sepet *se)
{
    struct meyveler mev[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d. meyve",i+1);
        meyveler_cagir(&mev[i]);
    }
}

int main()
{

    struct sepet s;


    printf("agirliklari kg cinsinden yaziniz\n");

    sepet_cagir(&s);

    bastir_tutar(&s);


    return 0;
}
