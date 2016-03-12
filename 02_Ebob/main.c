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
    int sayi1,sayi2,c,ebob;
    printf("Sayi giriniz: "); scanf("%d",&sayi1);
    printf("Sayi giriniz: "); scanf("%d",&sayi2);

    if (sayi1%sayi2==0){
        ebob=sayi2;
        printf("Ebob = %d\n",ebob);
    }
    else if (sayi1<0 || sayi2<0){
        printf("Hatali Giris");
    }

    else{
        while ( sayi1>sayi2 ){
            sayi1=sayi1-sayi2;
            while (sayi2>sayi1){
                sayi2=sayi2-sayi1;
            }
        }
        printf("Ebob = %d\n",sayi2);
    }
    system("PAUSE");
    return 0;
}

