#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf ("kac kez basacak:\n");
    scanf("%d",&n);

    FILE *dosya;
    dosya=fopen("akif.txt","w");
    for(i=0;i<n;i++)
    {


        fprintf(dosya,"siki tuttu");

    }

    fclose(dosya);

    return 0;
}
