/*
 * EX-1.c
 *
 *  Created on: Jul 29, 2021
 *      Author: Dyno
 */
#include <stdio.h>

int main()
{
    int i;
    printf("Enter an integer you want to check :");
    fflush( stdout );
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("\r\n%d is even",i);
    }
else
printf("\r\n%d is odd",i);


}

