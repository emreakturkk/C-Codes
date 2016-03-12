/* *************************************************
 *
 *       Author: Emre AKTÜRK
 *
 *       Mail: info@emreakturk.com
 *
 * **************************************************
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sayac=0,f=1;

    printf("Faktoriyeli Alinacak Sayiyi Giriniz: "); scanf("%u",&sayi);

    gir:

    sayac=sayac+1;
    f=f*sayac;

    if (sayac<sayi){
        goto gir;
    }

    printf("%d! = %u\n",sayi,f);

    system("PAUSE");
    return 0;

}
