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

/*1'den n ye kadar sayýlarýn toplamý*/

int main()
{
    int n,sayac=0,top=0;
    printf("N degerini giriniz:"); scanf("%d",&n);
    printf("N sayisi dahil degil!\n");
    girdi:

    top=top+sayac;
    sayac=sayac+1;

    if (sayac<n){
        goto girdi;
    }
    printf("Toplam = %d\n",top);
    system("PAUSE");
    return 0;
}
