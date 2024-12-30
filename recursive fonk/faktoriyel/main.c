#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int fak)
{
    if(fak==0)
    {
        return 1;
    }
    else
    {
        return fak*faktoriyel(fak-1);
    }
}

/*
void faktoriyel (int fak)
{
    int sonuc;
   if(fak==0)
   {
        sonuc=1;
   }                                //void olmadý
   else
   {
        sonuc=fak*faktoriyel(fak-1);
   }
   printf("\n\nsonuc=%d",sonuc);
}
*/
int main()
{
    int n;
    printf("bir sayi giriniz:\n");
    scanf("%d",&n);
    printf("\n\n%d",faktoriyel(n));
    return 0;
}
