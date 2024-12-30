#include <stdio.h>
#include <stdlib.h>

struct ogrenciler
{
    int numara;
    char cevap[10];
};

struct cevapAnahtari
{
    char dogrucevap[10];
};

int main()
{
    struct cevapAnahtari cevaplar;
    struct ogrenciler ogrenci[30];
    int i,j,k;
    float counter=0.0,puan=0.0;

    printf("cevap anahtarini giriniz:\n");

    for(k=0;k<10;k++)
    {
        scanf("%s",&cevaplar.dogrucevap[k]);
    }
    for(i=0;i<30;i++)
    {
        printf("%d.ogrencinin numarasi:\n",i+1);

        scanf("%d",&ogrenci[i].numara);

        printf("%d. ogrencinin cevaplari:\n",i+1);

        for(j=0;j<10;j++)
        {
            scanf("%s",&ogrenci[i].cevap[j]);
            if(ogrenci[i].cevap[j]==cevaplar.dogrucevap[j])
            {
            puan+=1.0;
            }
            else if(ogrenci[i].cevap[j]!=cevaplar.dogrucevap[j])
            {
            counter-=0.25;
            }
        }
        printf("%d.kisinin pani %f\n",i+1,puan+counter);
        puan=0.0;
        counter=0.0;
    }






    return 0;
}
