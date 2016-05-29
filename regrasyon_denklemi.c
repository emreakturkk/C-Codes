#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float s_sapma_x(int array1[], int value);
float s_sapma_y(int array2[], int value);
float ro(int array1[], int array2[], int value, float sx, float sy);
void regrasyon_denk(int array1[], int array2[], float ro_d ,float sx, float sy,int value);

int main()
{
    int value,i;
    printf("Kac Deger Girilecek: "); scanf("%d",&value);
    int array1[value],array2[value];
    float sx,sy,ro_d;

    printf("\n--------------------------------------\n\n");
    for(i=0;i<value;i++)
    {
        printf("%d.x = ",i+1); scanf("%d",&array1[i]);
    }
    printf("\n--------------------------------------\n\n");

    for(i=0;i<value;i++)
    {
        printf("%d.y = ",i+1); scanf("%d",&array2[i]);
    }

    printf("\n--------------------------------------\n\n");

    printf("x standart_s = %f",s_sapma_x(array1,value));

    printf("\n\n--------------------------------------\n\n");

    printf("y standart_s = %f",s_sapma_y(array2,value));

    printf("\n\n--------------------------------------\n\n");

    sx = s_sapma_x(array1, value);
    sy = s_sapma_y(array2, value);
    ro_d = ro(array1, array2, value, sx, sy);

    printf("ro Degeri = %f",ro(array1, array2, value, sx, sy));

    printf("\n\n--------------------------------------\n\n");

    regrasyon_denk(array1,array2,ro_d ,sx,sy, value);

    printf("\n\n--------------------------------------\n\n");


    system("PAUSE");
    return 0;
}

float s_sapma_x(int array1[], int value)
{
    float ortx,top=0,s=0;
    int i;

    for(i=0;i<value;i++)
    {
        top+=array1[i];
    }
    ortx = top/value;

    for(i=0;i<value;i++)
    {
        s += powf(array1[i]-ortx,2);
    }

    s = s/value;

    return sqrt(s);
}

float s_sapma_y(int array2[], int value)
{
    float orty,top=0,s=0;
    int i;

    for(i=0;i<value;i++)
    {
        top+=array2[i];
    }
    orty = top/value;

    for(i=0;i<value;i++)
    {
        s += powf(array2[i]-orty,2);
    }

    s = s/value;

    return sqrt(s);
}

float ro(int array1[], int array2[], int value, float sx, float sy)
{
    float ortx,orty,top = 0, ro_deger = 0;
    int i;

    //x ort
    for(i=0;i<value;i++)
    {
        top+=array1[i];
    }
    ortx = top/value;

    top = 0;
    //y ort
    for(i=0;i<value;i++)
    {
        top+=array2[i];
    }
    orty = top/value;

    for(i=0;i<value;i++)
    {
        ro_deger += (array1[i]-ortx) * (array2[i]-orty);
    }

    ro_deger /= (sx * sy);
    ro_deger /= value;

    return ro_deger;
}

void regrasyon_denk(int array1[], int array2[] ,float ro_d ,float sx, float sy, int value)
{
    int i;
    float ortx,orty,top = 0;

    //x ort
    for(i=0;i<value;i++)
    {
        top+=array1[i];
    }
    ortx = top/value;

    top = 0;
    //y ort
    for(i=0;i<value;i++)
    {
        top+=array2[i];
    }
    orty = top/value;

    printf("REGRASYON DENKLEMI :\n");
    printf("y = %.3fx %.3f", (sy*ro_d)/sx, ((-1*(sy*ro_d*ortx))+((sx*orty)))/sx);
}
