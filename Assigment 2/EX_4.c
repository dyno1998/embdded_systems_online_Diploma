
#include <stdio.h>

int main()
{
    float no1;
    printf("Enter a number :");
    fflush( stdout );
    scanf("%f",&no1);
    if(no1<0)
    {
        printf("%f is negative",no1);
    }
    else if(no1>0)
    {
                printf("%f is postive",no1);
    }
    else
    {
     printf("%f is zero",no1);
    }

}
