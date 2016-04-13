#include <stdio.h>
#include <stdlib.h>

int findIndex(int param[], int size, int value);

int main()
{
    int myArray[] = {90,90,96,80,90,100,85,90,95,95,85,90,60,70,75,81,65,50};

    int index = findIndex(myArray, 18, 90);
    if(index != -1)
    {
        printf("BULUNAN INDIS: %d.",index);
    }
    else{
        printf("ELEMAN BULUNAMADI");
    }

    return 0;
}

int findIndex(int param[], int size, int value)
{

    int i,a=-1;
    for(i=0;i<size;i++)
    {
        if(param[i]==value)
        {
            a=i;
            break;
        }

    }
    if(a>=0)
    {
        return a;
    }
    else
    {
        return -1;
    }

}


