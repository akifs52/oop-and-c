#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *ptr1;

    printf("dizinin tek elemanlari:\n");
    for(ptr1=dizi+1;ptr1<dizi+15;ptr1+=2) //for(pointeri ilk adrese e�itle;pointer� son adrese gelinceye kadar artt�r;pointer�n adresini artt�r)
    {
        printf("%4d",*ptr1);
    }

    printf("\ndizinin �ift elemanlari:\n");
    for(ptr1=dizi;ptr1<dizi+15;ptr1+=2)
    {
        printf("%4d",*ptr1);
    }
    return 0;
}
