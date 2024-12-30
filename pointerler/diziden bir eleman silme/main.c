#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char elenecekharf,dizi[100];
    char *ptr1;

    //printf("%d",dizi);

    printf("\ndizi giriniz:\n");
    fgets(dizi,sizeof(dizi),stdin);
    printf("dizinin normal hali:\n");

    for(ptr1=dizi;*ptr1;ptr1++)
    {
        printf("%c",*ptr1);
    }
    //printf("\n%d",ptr1); for içinde pointer adresini arttýrýnca bütün dizide deðiþiyor.

    printf("silinecek harfi yaziniz:\n");

    scanf("%c",&elenecekharf);

    /*for(ptr1=dizi;*ptr1;ptr1++)
    {
        if(*ptr1==elenecekharf)
        {
            strcpy(ptr1,ptr1+1); //yazılanlar adres olduğu için harfleri tek tek basıyor elenecek harfi atlayarak bir sonraki adrese gidiyor ve onun değerini basıyor
        }                       //strcpy(dizi,dizi+1) şeklinde yazarsak bozuluyor
    }
    */

    ptr1=dizi; //for döngüsü gibi yapıyoz
    while(*ptr1)
    {

        if(*ptr1==elenecekharf)
        {
            strcpy(ptr1,ptr1+1);
        }
        ptr1++;
    }

    printf("\n%s",dizi);

    return 0;

}
