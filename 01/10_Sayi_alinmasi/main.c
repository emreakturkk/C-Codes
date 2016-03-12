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
    int sayac=0,top=0,adet,sayi;
    printf("Girilecek Sayi Adeti:\n"); scanf("%d",&adet);
    oku:
    printf("Sayi Giriniz:\n"); scanf("%d",&sayi);

    top=top+sayi;
    sayac=sayac+1;

    if (sayac<adet){
        goto oku;
    }
    printf("%d",top);
    system("PAUSE");
    return 0;
}

