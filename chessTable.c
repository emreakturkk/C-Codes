#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l;
    for(i=0;i<8;i++)
    {
        for(k=0;k<3;k++)
        {
            for(j=0;j<8;j++)
            {
                for(l=0;l<3;l++)
                {
                    if ( (i+j) % 2 == 0 ){
                        printf("%c",219);
                    }
                    else{
                        printf(" ");
                    }
                }

            }
            printf("\n");
        }
    }
    system("PAUSE");
    return 0;

}
