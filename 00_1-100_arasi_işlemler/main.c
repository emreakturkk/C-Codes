 /* *************************************************
 *
 *       Author: Emre AKTÜRK
 *
 *       Mail: info@emreakturk.com
 *
 * **************************************************
 */

 /* 1-100 arasindaki sayilar ile islemler */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sayi,sayi1,top,top1,kare,kare1,t_kare=0,c_kare=0;

    sayi=1;
    sayi1=2;
    top=0;
    top1=0;



    while ( sayi<100 ) {
        top+=sayi;
        top1+=sayi1;
        sayi1+=2;
        sayi+=2;

    }

    printf("1-100 Arasi Sayilar:\n");
    printf("Cift Sayilar Toplami = %d\n",top1);
    printf("Tek Sayilarin Toplami = %d\n",top);


    for ( sayi=1;sayi<100;sayi+=2 ){
        kare=pow(sayi,2);
        t_kare+=kare;

    }
    printf("Tek Sayilarin Kareleri Toplami = %d\n",t_kare);

    for ( sayi1=2;sayi1<100;sayi1+=2 ) {
        kare1=pow(sayi1,2);
        c_kare+=kare1;
    }

    printf("Cift Sayilarin Kareleri Toplami = %d\n",c_kare);
    system("PAUSE");
    return 0;
}


