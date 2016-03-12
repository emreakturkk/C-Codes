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
    int s1,s2,ort;
    girdi:
    printf("Notlarinizi:"); scanf("%d%d",&s1,&s2);
    ort=(s1+s2)/2;

    if ( s1<0 || s2<0){
        printf("Hatali Giris");
        goto girdi;
    }

    else if ( ort < 50 ){
        printf("Kaldiniz\n");
    }

    else{
        printf("Gectiniz");
    }

    system("PAUSE");
    return 0;
}
