#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
//arr[a] ilk ba�ta b�le yazd�yd�m ama program ne kadar yer tutaca��n� bilmedi�i i�in zortluyor
//a ya ka� yer a�rtaca��n� scanf ile yazacakt�m.
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
