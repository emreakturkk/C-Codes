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
    int sayi,f=1,sayac;

    printf("Faktoriyeli Alinacak Sayiyi Giriniz: "); scanf("%u",&sayi);

    for (sayac=1;sayac<=sayi;sayac++)
        {
            f=f*sayac;
        }
    printf(" %d! =  %u\n",sayi,f);
    system("PAUSE");
    return 0;

}
