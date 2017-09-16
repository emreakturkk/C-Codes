// Diziyi tersten yazdirma
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Kac Sayi Girilecek: "); scanf("%d",&n);

    int sayi[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d.Sayi Giriniz: ",i+1); scanf("%d",&sayi[i]);
    }

    printf("-----------------------\n");

    for(i=n-1;i>=0;i--)
    {
        printf("%d.Sayi :%d\n",i+1,sayi[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}

