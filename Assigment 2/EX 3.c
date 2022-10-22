
#include <stdio.h>

int main()
{
    float no1,no2,no3;
    printf("print three numbers");
    fflush( stdout );
    scanf("%f%f%f",&no1,&no2,&no3);
    if(no1>no2)
    {
        if(no1<no3)
        {
            printf("/r/n largest number = %f",no3);
        }
        else
    printf("/r/n largest number = %f",no1);
    }
    else
    {
        if(no2<no3)
        {
                       printf("/r/n largest number = %f",no3);
        }
        else
            printf("/r/n largest number = %f",no2);

    }
}
