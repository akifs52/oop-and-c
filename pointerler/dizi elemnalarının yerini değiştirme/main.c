#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[100];
    int *ptr1,*ptr2;
    int n,temp;

    printf("lutfen dizi eleman sayisini belirtiniz:\n");
    scanf("%d",&n);

    printf("dizinin elemanlarini giriniz:\n");
    for(ptr1=dizi;ptr1<dizi+n;ptr1++)
    {
        scanf("%d",ptr1);
    }

    printf("dizinin ilk hali:\n");
    for(ptr1=dizi;ptr1<dizi+n;ptr1++)
    {
        printf("%4d",*ptr1);
    }

    for(ptr1=dizi,ptr2=dizi+n-1;ptr1<ptr2;ptr1++,ptr2--)
    {
        temp=*ptr1;
        *ptr1=*ptr2;    //bu geçicileri unutma
        *ptr2=temp;
    }
    printf("\ndizinin son hali:\n");
    for(ptr1=dizi;ptr1<dizi+n;ptr1++)
    {
        printf("%4d",*ptr1);
    }
    return 0;
}
