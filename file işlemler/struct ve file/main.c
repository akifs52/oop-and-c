#include <stdio.h>
#include <stdlib.h>

struct ogrenciler
{
    char ad[10];
    char soyad[10];
    int vize1,vize2,finalnotu;
    float ortalama;
};

int main()
{
    FILE *dosya;
    int n;
    struct ogrenciler bilgiler[n];
    printf("ogrenci sayisini girin:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d.ogrenci adi gir:",i+1);
        scanf("%s",bilgiler[i].ad);
        printf("%d.ogrenci soyadi gir:",i+1);
        scanf("%s",bilgiler[i].soyad);
        printf("%d.ogrenci ilk vize gir:",i+1);
        scanf("%d",&bilgiler[i].vize1);
        printf("%d.ogrenci ikinci vize gir:",i+1);
        scanf("%d",&bilgiler[i].vize2);
        printf("%d.ogrenci final notunu gir:",i+1);
        scanf("%d",&bilgiler[i].finalnotu);
        bilgiler[i].ortalama=(bilgiler[i].vize1/5)+(bilgiler[i].vize2/5)+(bilgiler[i].finalnotu*3/5);
    }

    dosya=fopen("ogrenciler.txt","w");
    if(dosya=NULL)
    {
        printf("hata");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            fprintf(dosya,"%d.ogrencinin adi: %s\n",i+1,bilgiler[i].ad);
            fprintf(dosya,"%d.ogrencinin soyadi: %s\n",i+1,bilgiler[i].soyad);
            fprintf(dosya,"%d.ogrencinin ilk vizesi: %d\n",i+1,bilgiler[i].vize1);
            fprintf(dosya,"%d.ogrencinin ikinci vizesi: %d\n",i+1,bilgiler[i].vize2);
            fprintf(dosya,"%d.ogrencinin final notu: %d\n",i+1,bilgiler[i].finalnotu);
            fprintf(dosya,"%d.ogrencinin ortalamasi: %s",i+1,bilgiler[i].ortalama);
            putc('\n',dosya);
        }
        printf("\n\ndosya yazdirma basarili");
        fclose(dosya);
    }
return 0;
  }
