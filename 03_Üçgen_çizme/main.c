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
    int i,n,sayac;

    printf("N Sayisini Giriniz:"); scanf("%d",&n);

    for (i=1;i<=n;i++){
        for (sayac=1;sayac<=i;sayac++)
            printf("*");
        printf("\n");

    }
    system("PAUSE");
    return 0;
}
