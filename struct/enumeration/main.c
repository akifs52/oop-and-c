#include <stdio.h>
#include <stdlib.h>

void bastir(enum month)
{
    for(int i=1;i<13;i++)
    {
        printf("%d", enum month);
    }
}


int main()
{
    enum aylar
    {
        ocak,
        �ubat,
        mart,
        nisan,
        may�s,
        haziran,
        temmuz,
        a�ustos,
        eyl�l,
        ekim,
        kas�m,
        aral�k
    };

    bastir(aylar);
    return 0;
}
