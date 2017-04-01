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


int mukemmel( int i )
{
    int top=0, j;

    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            top = top + j;
        }
    }

    if(top==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int sayi;

    printf("1-500 Arasi Mukemmel Sayilar:\n\n");

    for(sayi=1;sayi<500;sayi++){
        if (mukemmel(sayi)==1)
        {
            printf("%d = Mukemmel Sayi\n",sayi);
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}

