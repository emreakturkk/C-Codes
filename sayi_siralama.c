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
    int i, dizi[10];

    for(i=0;i<10;i++)
    {
        printf("%d . Sayi : ", i+1); scanf("%d", &dizi[i]);
    }
    printf("-----------------------------------\n");
    int eK = 9999999;
	for( i=0;i<10;i++ )
	{
		if( dizi[i]<eK )
		{
			eK = dizi[i];
		}
	}
	printf("En kucuk sayi : %d \n", eK);
	printf("-----------------------------------\n");

	int eB = -999999;
	for( i=0;i<10;i++ )
    {
        if( dizi[i] > eB ){
            eB = dizi[i];
        }
    }
    printf("En Buyuk sayi : %d \n", eB);
    printf("-----------------------------------\n");

    int bas=0,indis=0,t;

	while(bas<10)
	{
		eK=9999;
		for(i=bas;i<10;i++)
		{
			if(dizi[i]<eK)
			{
				eK=dizi[i];
				indis = i;
				t = dizi[bas];
				dizi[bas] = dizi[indis];
				dizi[indis] = t;
			}
		}

		bas++;
	}

	for( i=0;i<10;i++ )
	{
        printf("%d ", dizi[i]);
	}
	printf("\n-----------------------------------\n");
    return 0;
}
