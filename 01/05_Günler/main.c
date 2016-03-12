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
    char gun;

    gun:

    printf("Gun Giriniz: "); scanf("%d",&gun);

    switch( gun ){
        case 1: printf("Pazartesi\n"); break;
        case 2: printf("Sali\n"); break;
        case 3: printf("Carsamba\n"); break;
        case 4: printf("Persembe\n"); break;
        case 5: printf("Cuma\n"); break;
        case 6: printf("Cumartesi\n"); break;
        case 7: printf("Pazar\n"); break;
        default:
            printf("Hatali giris\n");
            goto gun;
        }

    system("PAUSE");
    return 0;

}

