#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
//arr[a] ilk baþta böle yazdýydým ama program ne kadar yer tutacaðýný bilmediði için zortluyor
//a ya kaç yer aýrtacaðýný scanf ile yazacaktým.
int a,arr[100];
int *pt1;



scanf("%d",&a);

for(pt1=arr;pt1<arr+a;pt1++)
{
    scanf("%d",pt1);
}

for(pt1=arr;pt1<arr+a;pt1++)
{
    printf("%d",*pt1);
}




    return 0;
}
