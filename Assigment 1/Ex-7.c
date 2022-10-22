/*
 * Ex1.c
 *
 *  Created on: Jul 29, 2021
 *      Author: Dyno
 */


#include <stdio.h>

int main()
{
    int a,b;
    printf("two intg : ");
    scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("a:%d b:%d",a,b);

    return 0;
}
