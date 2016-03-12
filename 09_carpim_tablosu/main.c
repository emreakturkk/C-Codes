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
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d * %d \t=  %d\n",i,j,i*j);
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
