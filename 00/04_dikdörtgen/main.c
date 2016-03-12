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

/* Dikdörtgen Alan ve Çevre Hesaplama */

int main()
{
    float yuks,genis,a,c;
    girdi:
    printf("Yukseklik ve Genisligi Giriniz: "); scanf("%f%f",&yuks,&genis);

    if ( yuks<0 || genis<0 ){
        printf("Hatali giris yapildi");
        goto girdi;
    }
    else{
        a=yuks*genis;
        c=2*(yuks+genis);
        printf("Alan = %.2f\nCevre = %.2f\n",a,c);
    }
    system("PAUSE");
    return 0;
}
