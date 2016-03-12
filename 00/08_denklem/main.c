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
    float a,b,x;
    printf("Denklem Icin a Degerini Giriniz: "); scanf("%f",&a);
    printf("Denklem Icin b Degerini Giriniz: "); scanf("%f",&b);
    x=(-b)/a;
    printf("x = %.2f\n",x);
    system("PAUSE");
    return 0;

}
