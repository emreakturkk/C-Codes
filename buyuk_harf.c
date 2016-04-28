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
    char dizi[50], dizi1[50];
    printf("Adi Soyadi: "); gets(dizi);

    if(dizi[0] >= 'a')
        dizi[0] -= 32;

    int bosluk_index = 0,i=0;
    while(dizi[i] != ' ')
    {
        i++;
    }

    bosluk_index = i;
    i++;

    while(dizi[i] != NULL)
    {
        if(dizi[i] >= 'a') dizi[i] -= 32;
        i++;
    }

    // kopyala

    i= bosluk_index + 1;
    int j=0;
    while(dizi[i] != NULL)
    {
        dizi1[j] = dizi[i];
        j++;
        i++;
    }

    dizi1[j] = ' ';
    j++;

    i=0;
    while(dizi[i] != ' ')
    {
        dizi1[j] = dizi[i];
        i++;
        j++;
    }
    dizi1[j] = NULL;

    printf("%s \n%s",dizi,dizi1);
    printf("\n");

    system("PAUSE");
    return 0;
}
