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

int asal(int dizi[])
{
    int i=0,j=0,k=0,a;
    for(i=0;i<50;i++)
        dizi[i]=1;

    for(i=2;i<50;i++)
    {
        a=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                a++;
            }

        }
        if(a==0)
        {
            dizi[i]=0;
        }

    }
    for(k=0;k<50;k++)
        printf("dizi[%d]=%d\n",k,dizi[k]);

}

int main()
{
    int dizi[50];
    printf("=> indis asal ise 0, degilse 1 <=");
    printf("\n----------------------------------\n");
    asal(dizi);
    printf("\n");

    system("PAUSE");
    return 0;

}
