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
#define oran 2.54

int main()
{
    float inch,cm;
    printf("Inch Degerinin Giriniz: "); scanf("%f",&inch);

    cm=inch*oran;

    printf("%.3f cm ",cm);

    system("PAUSE");
    return 0;

}
