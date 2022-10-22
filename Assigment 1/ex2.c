/*
 * mainn.c
 *
 *  Created on: Jul 29, 2021
 *      Author: Dyno
 */
#include <stdio.h>

int main()
{
    int no;
    printf("##########Console-output###\r\nEnter an integer:");
    fflush( stdout );
    scanf("%d",&no);
    printf("\r\nYou entered:%d\r\n###########################\r\n\r\n########################################################################",no);


    return 0;
}

