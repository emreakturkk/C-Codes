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

int main()
{
    char array[] = "  Bu  ornek bir  stringtir  ve  8 kelimeden  olusmaktadir ";
    char *ptr_array = &array;
    int i,bosluk = 0;
    char sayi[] = {'0','1','2','3','4','5','6','7','8','9'};

    for( i=0 ; *ptr_array != '\0' ; i++ )
    {
        if( (*ptr_array == ' ' && *(ptr_array+1) >= 'A' ))
        {
            bosluk++;
        }
        else if( *ptr_array == ' ' )
        {
            for( i=0; i<10; i++ )
            {
                if( *(ptr_array+1) == sayi[i] )
                   bosluk++;
            }
        }
        ptr_array++;
    }

    if( array[0] != ' ')
    {
        bosluk++;
    }

    printf("%s\n",array);

    printf("%d Kelime\n",bosluk);

	system("PAUSE");	
    return 0;
}