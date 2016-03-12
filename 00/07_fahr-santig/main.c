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
#define oran 1.8

int main()
{
    float fahr,santig;

    printf("Fahrenhayt Degerini Giriniz: "); scanf("%f",&fahr);

    santig = (fahr-32)/oran;

    printf("%.3f santigrat\n",santig);

    system("PAUSE");
    return 0;
}
