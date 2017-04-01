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

int kelime(char dizi[])
{
    int k, sayac=0, hece=0, i, j, bosluk=0;
    char unlu[] = {'a','A','e','E','I','i','o','O','u','U'};
    k = 0;
    while( dizi[k] != '\0' )
    {
        sayac++;
        k++;
    }
    for(i=0;i<sayac;i++)
    {
        for(j=0;j<10;j++)
            if( dizi[i] == unlu[j])
                hece++;
    }
    printf("Hece Sayisi = %d\n", hece);
    printf("-----------------------------\n");

    for(i=0;i<sayac;i++)
        if( dizi[i] == ' ' )
            bosluk++;

    printf("Kelime Sayisi = %d\n",bosluk+1);
    printf("-----------------------------\n");
    printf("Harf Sayisi = %d\n",sayac-bosluk);
    printf("-----------------------------\n");

    for(i=0;i<sayac;i++)
    {
        if(dizi[i]!=' ')
            printf("%c",dizi[i]);
        else if(dizi[i]==' ')
            printf("\n");
    }
    printf("\n-----------------------------\n");
    printf("Tersi = ");
    for(i=sayac-1;i>=0;i--)
    {
        printf("%c",dizi[i]);
    }

    printf("\n-----------------------------\n");

}

int main()
{
    char dizi[1000];
    printf("Isminiz ve Soyadiniz: "); gets(dizi);
    printf("-----------------------------\n");
    kelime(dizi);

    system("PAUSE");
    return 0;
}
