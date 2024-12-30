#include <stdio.h>
#include <stdlib.h>
#define N 4

struct otelci
{
    char ad[10];
    char soyad[10];
    int kahvalti; //yap�yorsa 1 yapm�yorsa 0
    int aksam_yemegi; //ayn�
    int otel; //1 se otelde de�l 2yse 2*l� 3se 3*l�
    int yalniz; //0 ise arakadas�yla 1 ise yaln�z
};

void ikiyildiz(struct otelci e[N])
{
    for(int i=0;i<N;i++)
    {
        if(e[i].otel==2)
        {
            printf("2 y�ld�zla otelde kalanlar:\n");
            printf("ad:%s soyad:%s",e[i].ad,e[i].soyad);
        }
    }
}

void kahvalti_yapanlar(struct otelci k[N])
{
    for(int i=0;i<N;i++)
    {
        int counter_kahvalti=0;
        if(k[i].kahvalti== 1)
        {
            counter_kahvalti++;
        }
        printf("%d",counter_kahvalti);
    }
}

void total_fiyat(struct otelci f[N])
{
    int tutar=0;
    for(int i=0;i<N;i++)
    {
        if(f[i].kahvalti==1)
        {
            tutar+=15;
        }
        if(f[i].aksam_yemegi==1)
        {
            tutar+=35;
        }
        if(f[i].yalniz==0)
        {
            tutar*=2;
        }
        else if(f[i].yalniz==1)
        {
            tutar+=0;
        }
        if(f[i].otel==1)
        {
            tutar+=0;
        }
        else if(f[i].otel==2)
        {
            tutar+=75;
        }
        else if(f[i].otel==3)
        {
            tutar+=100;
        }
        printf("%d. kisinin faturas�:%d",i+1,tutar);
        tutar=0;
    }
}

int main()
{
    struct otelci musteri[N];

    kahvalti_yapanlar(musteri);

    return 0;
}
