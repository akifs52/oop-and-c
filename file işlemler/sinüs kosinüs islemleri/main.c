#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *dosya;
    float sinus,kosinus;

    dosya=fopen("sinüs ve kosinüs.txt","w");

    if(dosya == NULL)
    {
        printf("hata");
    }
    else
    {
        for(int i=0;i<=360;i++)
        {
            sinus=sin(i*3.14/180);
            kosinus=cos(i*3.14/180);
            fprintf(dosya,"aci:%d\tsin degeri:%f\t cos degeri:%f\n",i,sinus,kosinus);
        }
        fclose(dosya);
        printf("dosyaya yazildi");
    }
    return 0;
}
