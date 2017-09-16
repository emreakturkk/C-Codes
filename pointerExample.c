#include <stdio.h>
#include <stdlib.h>

int stringLength( char *param );
int countChar( char *param1, char *param2, int length );

int main()
{
    char dizi[10],dizi1[10];

    printf("String: "); scanf("%s",dizi);
    printf("Char: "); scanf("%s",dizi1);

    printf("%s : %d tane var.", dizi1 , countChar( dizi,dizi1,stringLength(dizi)));

    printf("\n");
    system("PAUSE");
    return 0;
}

int stringLength( char *param )
{
    int i=0;
    for(i=0; *param != '\0';i++)
        param++;

    return i;
}

int countChar( char *param1, char *param2, int length )
{
    int i=0, j=0, a=0;
    for( i=0 ; i < length ; i++ )
    {
        if( *param1 == *param2 )
        {
            a++;
        }
        param1++;
    }
    return a;
}
