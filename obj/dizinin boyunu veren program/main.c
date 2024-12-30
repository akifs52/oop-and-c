#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    char *ptr1;
    int counter=0;

    printf("diziye bir seyler girin:\n");
    fgets(dizi,sizeof(dizi),stdin);

    for(ptr1=dizi;*ptr1;ptr1++) //*ptr1; i koymamýz dizinin son elemanýna kadar gitmeyi saðlar.
    {
        counter++;
    }

    /*for(ptr1=dizi;*ptr1;ptr1++)
    {

    }
    */

    //printf ("dizinin boyu %d",ptr1-dizi);


    printf("\ndizinin boyu: %d",counter-1); //counter oluþturmayýp ptr1-dizi yapsaydýk adresler farkýndan yine ayný sonuçlar çýkardý.


    return 0;
}
