#include <stdio.h>
#include <stdlib.h>

void findGreaterValues(int param[], int size, int value);

int main()
{
    int myArray[] = {100,90,0,40,60};

    findGreaterValues(myArray, 5, 59);

    system("PAUSE");
    return 0;

}

void findGreaterValues( int param[], int size, int value )
{
    int i, sayi=0;

    for(i=0;i<size;i++)
    {
        if( param[i] > value )
        {
            sayi++;
        }
    }
    printf("%d ADET DEGER %d 'DAN BUYUKTUR\n", sayi, value);
}