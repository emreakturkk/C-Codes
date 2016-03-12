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

    int i,j,n;
    printf("N: "); scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            printf("*");
        }
    printf("\n");
    }
    system("PAUSE");
    return 0;
}
