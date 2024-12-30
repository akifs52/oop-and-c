#include <stdio.h>
#include <stdlib.h>
void ustunu_al(int x,int y,int *r)
{
    *r=1;

   for(int i=1;i<=y;i++)
   {
       *r*=x;
   }

}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    ustunu_al(a,b,&c);
    printf("%d", c);

    return 0;
}
