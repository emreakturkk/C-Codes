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
    int s=2,n;
    printf("Sayi giriniz:"); scanf("%d",&n);
    girdi:


    if (s<n){
        printf("%d\n",s);
        s=s+2;
        goto girdi;
    }
    system("PAUSE");
    return 0;

}
