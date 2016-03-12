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
    int j,top=0,sayac=0,sayi;

    printf("Sayi Giriniz: "); scanf("%d",&sayi);

    for(j=1;j<=sayi;j++){
        if(sayi%j==0){
            printf("%d\n",j);
            sayac=sayac+1;
            top=top+j;
        }

    }
    printf("Bolen = %d\n",sayac);
    printf("Toplamlari = %d\n",top);
    system("PAUSE");
    return 0;
}
