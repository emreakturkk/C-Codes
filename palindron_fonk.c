/* ******************************************************
 *                                                      *
 *            Author: Emre AKTÜRK                       *
 *                                                      *
 *            Mail: info@emreakturk.com                 *
 *                                                      *
 *            Compiler: gcc                             *
 *                                                      *
 * ******************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int palindrom( int sayi )
{
    int top, sayi1, tersi;


    top = 0;
    sayi1 = sayi;

    while ( sayi1 != 0 ){

        tersi = sayi1%10;
        sayi1 = sayi1/10;
        top = top * 10 + tersi;
    }
    if ( sayi == top ){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int girdi;
    printf("Sayi Giriniz: "); scanf("%d", &girdi);

    printf("%d\n", palindrom(girdi));

    system("PAUSE");
    return 0;

}
