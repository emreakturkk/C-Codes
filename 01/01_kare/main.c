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
    int sayi,kare;

    for (;sayi;){
        printf("Sayi Giriniz: "); scanf("%d",&sayi);
        if (sayi>0){
            kare=sayi*sayi;
            printf("Karesi = %d\n",kare);
        }
        else
        {
            printf("Hatali Giris\n");
        }
    }
    system("PAUSE");
    return 0;

}
