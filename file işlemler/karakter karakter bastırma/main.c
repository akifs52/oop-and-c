#include <stdio.h>
#include <stdlib.h>

int main()
{
    char abbas[100];

    FILE *dosya;
    dosya=fopen("bilgi.txt","w");
    if(dosya==NULL)
    {
        printf("dosya bos");
    }
    else
    {
        printf("giriniz\n\n");
        gets(abbas);
        while(abbas!=EOF)
        {
            printf("%s",abbas);
            abbas=fgetc(dosya);
        }
        fclose(dosya);
    }
    return 0;
}
