#include <stdio.h>
#include <stdlib.h>
//bir dizinin ka� say�s� oldu�unu belirt ve onu �teki diziye kopyala pointer ile
void bastir(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    printf("\n");
}

int main()
{
    int n,first_array[100];
    int dest_array[100];
    int *first_pointer,*dest_pointer,*end_pointer;

    first_pointer=first_array;
    dest_pointer=dest_array;
    printf("kac elemanli belirtiniz\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",first_pointer);
        first_pointer++;
        //scanf("%d",(first_pointer+i));
       // first_pointer++; b�yle yazarsam pointer tekrear eski haline d�ndermek gerekceek o y�zden b�yle yazmayacaz
    }
     first_pointer= &first_array[0];

     //end_pointer=&first_array[n-1];

        end_pointer=first_pointer;


         bastir(first_pointer,n);


    while(first_pointer<=end_pointer)
    {
        *first_pointer=*dest_pointer;
        first_pointer++;
        dest_pointer++;
    }
    printf("kopyalandiktan sonra\n");
    bastir(dest_pointer,n);




    return 0;
}
