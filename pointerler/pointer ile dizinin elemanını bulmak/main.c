#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int size,toSearch,searchIndex;

    printf("kac elemanli:\n");

    scanf("%d",&size);

    bastir(array,size);

    printf("\naradiginiz sayiyi giriniz");

    scanf("%d",&toSearch);

    searchIndex=ara(array,size,toSearch);

    if( searchIndex == -1)
    {
        printf("\nboyle sayi yok");
    }
    else
    {
        printf("\n%d %d.eleman",toSearch,searchIndex+1);
    }

    return 0;
}
int ara(int *array,int size,int toSearch)
{
    int index=0;
    int *endOfArray;
    endOfArray = (array + size -1);
    while(array <= endOfArray && *array!=toSearch)
    {
        index++;
        array++;
    }
    if(*array!=toSearch) //(array <= endOfArray)
    {
        return -1;        // return index;
    }
    else
        return index;       //return -1
}


void bastir(int *array,int size)
{
    int *endOfArray;
    endOfArray=(array+size-1);//son elemaný tutan son adres
    while(array<=endOfArray)
    {
        scanf("%d",array);
        array++;
    }

}
