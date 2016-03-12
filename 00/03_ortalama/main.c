 /* *************************************************
 *
 *       Author: Emre AKTÜRK
 *
 *       Mail: info@emreakturk.com
 *
 * **************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,s3,ort;
    printf("Sayi Giriniz: "); scanf("%d",&s1);
    printf("Sayi Giriniz: "); scanf("%d",&s2);
    printf("Sayi Giriniz: "); scanf("%d",&s3);

    ort=(s1+s2+s3)/3;

    printf("Ortalama = %d\n",ort);

    system("PAUSE");
    return 0;

}

