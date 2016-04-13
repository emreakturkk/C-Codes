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

int main()
{
    int sayi1, sayi2, ebob;
    char cikis;

    while( sayi1 )
    {
        printf("=> Programdan Cikmak Icin 'C' ye Basin\n\n");
        printf("Buyuk Olan Sayiyi Giriniz: "); scanf("%d", &sayi1); scanf("%c", &cikis);

        if( cikis == 'c' )
        {
            printf("\n");
            break;
        }

        printf("Kucuk Olan Sayiyi Giriniz: "); scanf("%d", &sayi2); scanf("%c", &cikis);

        if( cikis == 'c' )
        {
            printf("\n");
            break;
        }

        if( sayi1 > 0 && sayi2 >0 && sayi1 >= sayi2 )
        {
            if ( sayi1 % sayi2 == 0 )
            {
                ebob = sayi2;
                printf("Ebob = %d\n",ebob);
                printf("------------------------------------\n");
            }

            else{
                while ( sayi1 > sayi2 ){
                    sayi1 = sayi1 - sayi2;
                while ( sayi2 > sayi1 ){
                    sayi2 = sayi2 - sayi1;
                    }
                }
                printf("Ebob = %d\n", sayi2);
                printf("------------------------------------\n");
            }
        }

        else
        {
            printf("Hatali Giris\n");
            printf("------------------------------------\n");
        }
    }

    system("PAUSE");
    return 0;
}

