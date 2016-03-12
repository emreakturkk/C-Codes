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
#define pi 3.14

/* Çember Alan ve Cevre Hesaplama */

int main()
{
    float r,a,c;

    r_gir:

    printf("Yaricapi giriniz: "); scanf("%f",&r);

    if ( r<0 ){
        printf("Hatali giris");
        goto r_gir;

    }
    else{
        a=pi*r*r;
        c=2*pi*r;
        printf("Alan = %.2f \n",a);
        printf("Cevre = %.2f  \n",c);
    }
    return 0 ;
}
