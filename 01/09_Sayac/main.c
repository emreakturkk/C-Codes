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
    int sayi,sayac=0;

    printf("Bitirmek icin 0'a basin\n");girdi:
    printf("Sayi giriniz: "); scanf("%d",&sayi);

    sayac=sayac+1;
    if ( sayi == 0 ){
        printf("Sayac = %d\n",sayac-1);
    }
    else{
        goto girdi;
    }
    system("PAUSE");
    return 0;
}
