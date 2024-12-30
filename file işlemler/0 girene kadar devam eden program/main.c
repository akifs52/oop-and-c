#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelimeler[100];
    FILE *dosya;


//dosya=fopen("akif.txt","a"); //asagidaki yer yerine burada dosyayı acmistim ama o zaman sadece 1 kere yazdı.




    while(1)
    {
        printf("kelime gir:");

        gets(kelimeler);

        if(kelimeler[0]=='0')
        {
           printf("islem sonlandirildi");
           exit(1);

        }
        else
        {
            dosya=fopen("akif.txt","a"); //a çünkü her seferinde baþtan baþlamasýn

            if(dosya==NULL)
            {
                printf("hata");
            }
            else
            {
                fprintf(dosya,"%s\n",kelimeler);
            }

        }
        fclose(dosya);
    }

    return 0;
}
