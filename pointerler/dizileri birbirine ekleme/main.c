#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[50],dizi2[50];
    int *ptr1,*ptr2;
    int elemansayisi1,elemansayisi2;

    printf("dizi1 in eleman sayisini girin:\n");
    scanf("%d",&elemansayisi1);
    printf("dizi2 nin eleman sayisini girin:\n");
    scanf("%d",&elemansayisi2);

    printf("dizi1 için elemanlarý gir:\n");
    for(ptr1=dizi1;ptr1<dizi1+elemansayisi1;ptr1++)
    {
        scanf("%4d",ptr1);
    }

    printf("dizi2 için eleman gir:\n");

    for(ptr2=dizi2;ptr2<dizi2+elemansayisi2;ptr2++)
    {
        scanf("%4d",ptr2);
    }
    printf("\n1.dizin elemanlarý\n\n");
   /* for(ptr1=dizi1;ptr1<dizi1+elemansayisi1;ptr1++)
    {
        int i=0;                                                            BÖYLE NÝYE OLMUYOR??
        printf("element %d : %d\n",i,*ptr1);
        i++;
    }
    */
    for(int i=0;i<elemansayisi1;i++)
    {
        ptr1=dizi1;
        printf("element %d : %d\n",i,*ptr1);
        ptr1++;
    }
    printf("\n2.dizin elemanlarý\n\n");
    for(int i=0;i<elemansayisi2;i++)
    {
        ptr2=dizi2;
        printf("element %d : %d\n",i,*ptr2);
        ptr2++;
    }
    printf("öbür diziye kopyalama:\n");
    for(ptr2=dizi2;ptr2<dizi2+elemansayisi2;ptr2++)
    {

        printf("%4d",*ptr2);
    }
    for(ptr1=dizi1;ptr1<dizi1+elemansayisi1;ptr1++)
    {
        printf("     %4d",*ptr1);
    }
    return 0;
}
