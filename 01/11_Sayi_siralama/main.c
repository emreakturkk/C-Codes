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
    int s=0,n;
    printf("Sayi giriniz:"); scanf("%d",&n);
    girdi:
    s=s+1;
    printf("%d\n",s);
    if (s<n){
        goto girdi;
    }
    system("PAUSE");
    return 0;
}
