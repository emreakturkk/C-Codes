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

int bolenler(int sayi1);
int sayilar();
int asalbolenler(sayi1);
int main()
{
    int sayi,islem;
    printf("Sayi Giriniz: "); scanf("%d",&sayi);

    printf("%d = %d Bolen\n",sayi,bolenler(sayi));
    printf("%d = %d En Buyuk Asal Bolen\n\n",sayi,asalbolenler(sayi));
    printf("=> 100 - 1000 Arasi 3 ve 5 Bolunen Sayilar <=\n\n");
    sayilar();

    system("PAUSE");
    return 0;
}
int sayilar()
{
    int sayi,i,k,a;
    for(sayi=100;sayi<1000;sayi++)
    {
        if(sayi%3==0 || sayi%5==0)
        {
            printf("%d\t",sayi);
        }
    }
}
int bolenler(int sayi1)
{
    int sayi,i,k,a;
    for(sayi=100;sayi<1000;sayi++)
    {
        if(sayi%3==0 || sayi%5==0)
        {
            a=0;
            for(k=1;k<=sayi;k++)
            {
                if(sayi1%k==0)
                    a++;
            }
        }
    }
    return a;
}

int asalbolenler(int sayi1)
{
    int i,a,j,k,sayac=0,max=0;
    for(i=2;i<sayi1;i++)
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
            if(sayi1%i==0)
            {
                if(max<i)
                    max=i;
            }
        }
    }

    return max;
}
