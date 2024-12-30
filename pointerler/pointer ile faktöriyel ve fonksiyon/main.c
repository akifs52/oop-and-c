#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int *sayi)
{
    int sonuc,i;
    for(i=*sayi;i>=1;i--)
    {
        sonuc=1;
        sonuc*=*sayi;
        *sayi--;
    }
    return sonuc;
}
int main()
{
    int sayi,faktor,orgsayi;

    printf("lutfen bir sayi girinizi:\n");

    scanf("%d",&sayi);

    orgsayi=sayi;

    faktor=faktoriyel(&sayi);

    printf("%d! faktoriyeli %d",orgsayi,faktor);


    return 0;
}
