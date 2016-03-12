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
    int top,sayi,sayi1,tersi;
    printf("Sayi Giriniz:"); scanf("%d",&sayi);

    top=0;
    sayi1=sayi;
    while ( sayi1 != 0 ){

        tersi=sayi1%10;
        sayi1=sayi1/10;
        top=top*10+tersi;
    }

    if ( sayi == top){
        printf("Palindrom\n");
    }
    else{
        printf("Palindrom Degil\n");
    }

    system("PAUSE");
    return 0;

}
