// Girilen sayısının dizide var olup olmamasını kontol
#include <stdio.h>
#include <stdlib.h>

int kontrol( int dizi[], int boyut )
{
    int k, l;
    for( k = 0 ; k < boyut ; k++ )
    {
        if( dizi[k] == dizi[boyut] )
            l = 1;
    }
    if( l == 1 )
        return 1;
    else
        return 0;
}

int main()
{
    int dizi[10],sayi;
    for( sayi=0 ; sayi < 10; )
    {
        printf("%d. Sayi = ", sayi+1); scanf("%d",&dizi[sayi]);

        if(kontrol(dizi,sayi)==1)
            printf("=> Lutfen Tekrar Giriniz.\n");
        else{
            printf("=> Sayi = %d\n", dizi[sayi]);
            sayi++;
        }
    }

    system("PAUSE");
    return 0;
}
