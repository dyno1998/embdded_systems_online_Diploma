/*
 * Ex1.c
 *
 *  Created on: Jul 29, 2021
 *      Author: Dyno
 */


#include <stdio.h>

int main()
{
    char operator;
    int i,j,answer;
    printf("Enter operator either + or - or * or divide");
    fflush( stdout );
    scanf("%c",&operator);
    printf("Enter two operands :");
    fflush( stdout );
    scanf("%d %d",&i,&j);
    switch(operator)
{
    case '*':
    {
        answer=i*j;
        printf("%d*%d=%d",i,j,answer);
    }
    break;
      case '-':
    {
        answer=i-j;
        printf("%d-%d=%d",i,j,answer);
    }
    break;
      case '+':
    {
        answer=i+j;
        printf("%d+%d=%d",i,j,answer);
    }
    break;
      case '/':
    {
        answer=i/j;
        printf("%d/%d=%d",i,j,answer);
    }
    break;
}



    return 0;
}
