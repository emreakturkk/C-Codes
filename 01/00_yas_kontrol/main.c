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
    int yas;

    printf("Yasinizi Giriniz: "); scanf("%d",&yas);

    if ( yas<18 )
    {
        printf("Yasiniz 18 den kucuk\n");
    }
    else
    {
        printf("Siteye Gir\n");
    }

    system("PAUSE");
    return 0;
}
