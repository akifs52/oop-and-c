#include <stdio.h>
#include <stdlib.h>


void tekSayilar(int baslangic,int bitis)
{

    if(baslangic<=bitis)
    {
        printf("%d\n",baslangic);
        tekSayilar(baslangic+2,bitis);
    }
}



int main()
{
    int n,duzeltme;
    printf("sayi gir:\n");
    scanf("%d",&n);

    if(n%2==1)
    {
        duzeltme=n;
    }
    else
    {
        duzeltme=n-1;
    }

    tekSayilar(1,duzeltme);


    return 0;
}
