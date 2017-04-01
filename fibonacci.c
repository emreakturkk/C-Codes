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

int fibonacci(int sayi);

int main()
{
    int sayi;
    printf("Sayi Giriniz: "); scanf("%d", &sayi);
    printf("-----------------------------------\n");
    printf("Fibonacci(%d) = %d\n", sayi, fibonacci(sayi));
    printf("-----------------------------------\n");
    system("PAUSE");
    return 0;
}

int fibonacci( int n )
{
    if ( n==0 || n==1 )
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
