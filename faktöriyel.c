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

int faktoriyel(int n);

int main()
{
    int sayi;
    printf("Sayi Giriniz: "); scanf("%d", &sayi);
    printf("Faktoriyel(%d) = %d\n", sayi, faktoriyel(sayi));

    printf("\n");
    system("PAUSE");
    return 0;

}

int faktoriyel( int n )
{
    if ( n==0 || n==1 )
    {
        return n;
    }
    else
    {
        return n=n*faktoriyel(n-1);
    }
}
