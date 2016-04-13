/* ******************************************************
 *                                                      *
 *            Author: Emre AKTÜRK                       *
 *                                                      *
 *            Mail: info@emreakturk.com                 *
 *                                                      *
 *            Compiler: gcc                             *
 *                                                      *
 * ******************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=0;i<255;i++){
        printf("%d = %c\t", i, i);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
