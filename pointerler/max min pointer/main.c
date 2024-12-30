#include <stdio.h>
#include <stdlib.h>
/*void bastir(int *array,int n)
{
 for(n=0;n<10;n++)
 {
     scanf("%d",array);
     array++;
 }
}
*/

int main()
{
    int array[10];
    int max,min;
    int *ptr1,*end_ptr;

    printf("degerleri gir:\n");

    for(ptr1=array;ptr1<array+10;ptr1++)
    {
        scanf("%d",ptr1);
    }

    end_ptr=ptr1;

    ptr1=array;

    max=min=*ptr1;

    while(ptr1+1<=end_ptr) //(ptr<=end_ptr)
    {
                            //ptr1++; yapýnca max ta hata çýktý
        if(max<*ptr1)
        {
            max=*ptr1;
        }
        else if(min>*ptr1)
        {
            min=*ptr1;
        }
        ptr1++;
    }
    printf("max deger: %d min deger:%d",max,min);


    return 0;
}
