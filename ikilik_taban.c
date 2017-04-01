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

int main()
{
    int sayi, sayac, i;
    int ikilik[100];
    printf("Sayi Giriniz : "); scanf("%d", &sayi);
    printf("---------------------------\n");
    sayac=0;
    while (sayi>0)
    {
        sayac++;
        ikilik[sayac]= sayi % 2;
        sayi = sayi / 2;
    }
    printf("Ikilik Tabanda = ");
    for(i=sayac;i>0;i--)
    {
        printf("%d", ikilik[i]);
    }
    printf("\n---------------------------\n");

    system("PAUSE");
    return 0;
}
