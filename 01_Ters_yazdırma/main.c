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

    int sayi,top,tersi,basamak,carp;

    printf("Bir sayi giriniz:"); scanf("%d",&sayi);
    printf("Carpmak Istediginiz Sayiyi Giriniz:"); scanf("%d",&carp);

    top=0;
    basamak=0;
    while ( sayi ){
        tersi=sayi%10;
        sayi=sayi/10;
        top=top*10+tersi;
        basamak++;
    }

    printf("Sayi %d Basamakli\n",basamak);
    printf("Sayinin Tersi = %d\n",top);
    printf("%d * %d = %d\n",top,carp,top*carp);
    system("PAUSE");
    return 0;
}
