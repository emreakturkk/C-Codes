#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, j, top=0, sayac=0;

    printf("Sayi Giriniz: "); scanf("%d",&sayi);
    printf("------------------\n");

    for(j=1;j<=sayi;j++){
        if( sayi % j == 0 ){
            printf("%d\n",j);
            sayac = sayac + 1;
            top = top + j;
        }

    }
    printf("------------------\n");
    printf("Bolen = %d\n",sayac);
    printf("Toplamlari = %d\n",top);
    printf("------------------\n");

    system("PAUSE");
    return 0;
}
