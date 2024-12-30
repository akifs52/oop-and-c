#include <stdio.h>
#include <stdlib.h>

int toplama(int *n)
{
    int *p;
    p=&n;
    if(*p==1)
    {
        return 1;
    }
    else
    {

        return *p+toplama(&p-1);
    }
}


    int main()
{
    int cevap, sayi;
    printf("sayi gir:\n");
    scanf("%d",&sayi);
    cevap=toplama(&sayi);
    printf("cevap: %d", cevap);


    return 0;
}
