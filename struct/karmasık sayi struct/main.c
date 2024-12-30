#include <stdio.h>
#include <stdlib.h>


struct karmasiksayi
{
    int a,b;
};

int main()
{
    char islem;

    printf("operatoru gir:\n");
    scanf("%c",&islem);


    struct karmasiksayi sayi1;
    printf("ilk karmasik sayiyi gir:\n");
    scanf("%d %d",&sayi1.a,&sayi1.b);

    struct karmasiksayi sayi2;
    printf("ikinci karmasik sayiyi gir:\n");
    scanf("%d %d",&sayi2.a,&sayi2.b);



    struct karmasiksayi sonuc;


    if(islem=='+')
    {
        sonuc.a= sayi1.a+sayi2.a;
        sonuc.b= sayi1.a+sayi1.b;
        printf("\nsonuc = %d+%di",sonuc.a,sonuc.b);
    }
    else if(islem=='-')
    {
        sonuc.a=sayi1.a-sayi2.a;
        sonuc.b=sayi1.b-sayi2.b;
        printf("\nsonuc =%d+%di",sonuc.a,sonuc.b);

    }else
    printf("\ngirdi yanlis");



    return 0;
}
