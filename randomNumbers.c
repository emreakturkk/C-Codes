/* ******************************************************
 *                                                      *
 *            Author: Emre AKTÜRK                       *
 *                                                      *
 *            Mail: mail@emreakturk.com                 *
 *                                                      *
 *            Compiler: gcc                             *
 *                                                      *
 * ******************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>

int main()
{
    int dizi[100], i=100, k, sayi, j,sayac=0, sayac1=0, sayac2=0, sayac3=0, sayac4=0, sayac5=0;
    srand(time(NULL));

    for(i=0;i<100;i++){
        sayi = 1 + (rand()%6);
        dizi[i] = sayi;
    }

    for(k=0;k<100;k++)
    {
        printf("%d\t", dizi[k]);
    }

    printf("\n");

    for(j=0;j<100;j++)
    {
        if(dizi[j]==1)
            sayac++;

        else if(dizi[j]==2)
            sayac1++;

        else if(dizi[j]==3)
            sayac2++;

        else if(dizi[j]==4)
            sayac3++;

        else if(dizi[j]==5)
            sayac4++;

        else if(dizi[j]==6)
            sayac5++;
    }

    printf("1 => %d\n2 => %d\n3 => %d\n4 => %d\n5 => %d\n6 => %d\n",sayac,sayac1,sayac2,sayac3,sayac4,sayac5);

    system("PAUSE");
    return 0;
}



