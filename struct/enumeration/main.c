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
        þubat,
        mart,
        nisan,
        mayýs,
        haziran,
        temmuz,
        aðustos,
        eylül,
        ekim,
        kasým,
        aralýk
    };

    bastir(aylar);
    return 0;
}
