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
    int sayi1,sayi2;
    printf("Iki Sayi Giriniz:"); scanf("%d%d",&sayi1,&sayi2);

    if ( sayi1 == sayi2 ){
        printf("Iki sayi esittir.\n");
    }
    else if ( sayi1<sayi2 ){
        printf("%d Kucuktur %d den\n",sayi1,sayi2);
    }
    else{
        printf("%d Buyuktur %d den\n",sayi1,sayi2);
    }
    system("PAUSE");
    return 0;


}
