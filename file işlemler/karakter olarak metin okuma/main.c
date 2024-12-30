#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    FILE *dosya;
    dosya=fopen("cevat.txt","r");
    if(dosya==NULL)
    {
        printf("hata");
    }
    else
    {
        do
        {
            karakter=getc(dosya);
            putchar(karakter);

        }
        while(karakter!=EOF);
    }
    fclose(dosya);
    return 0;
}
