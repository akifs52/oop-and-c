#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[15]="klbdqisteforchx";
    char *pt1,*pt2;
    char diziCopy[15];

    pt2=diziCopy;

    for(pt1=dizi;pt1<dizi+15;pt1++)/*pt2++ aþaðýdakinin yerine olabilir*/
    {
        *pt2=*pt1;
        pt2++;
    }
    pt2=diziCopy;
    printf("%d\n",pt2);
    for(int i=0;i<15;i++)
        {
            printf("%c",*pt2);
            pt2++;
        }
            printf("\n%d\n",pt2);
    return 0;
}
