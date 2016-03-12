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

int bolen( int i )
{
    int j;

    for(j=1;j<i;j++){
        if(i%j==0)
            printf("%d\n",j);
    }
}

int main()
{
    int sayi,sayi1;
    printf("Sayi Giriniz: "); scanf("%d",&sayi);
    sayi1=bolen(sayi);
    printf("%d\n",sayi1);
    system("PAUSE");
    return 0;
}
