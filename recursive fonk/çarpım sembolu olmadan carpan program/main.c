#include <stdio.h>
#include <stdlib.h>
int carpma(int x,int y)
{
    if (x==0 || y==0)
    {
        return 0;
    }
    else

    {
        return x+carpma(x,y-1);
    }
}

int main()
{
    int a,b;
    printf("iki sayý gir:\n");
    scanf("%d%d",&a,&b);
    printf("sonuc :%d",carpma(a,b));
    return 0;
}
