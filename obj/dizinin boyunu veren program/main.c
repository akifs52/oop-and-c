#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    char *ptr1;
    int counter=0;

    printf("diziye bir seyler girin:\n");
    fgets(dizi,sizeof(dizi),stdin);

    for(ptr1=dizi;*ptr1;ptr1++) //*ptr1; i koymam�z dizinin son eleman�na kadar gitmeyi sa�lar.
    {
        counter++;
    }

    /*for(ptr1=dizi;*ptr1;ptr1++)
    {

    }
    */

    //printf ("dizinin boyu %d",ptr1-dizi);


    printf("\ndizinin boyu: %d",counter-1); //counter olu�turmay�p ptr1-dizi yapsayd�k adresler fark�ndan yine ayn� sonu�lar ��kard�.


    return 0;
}
