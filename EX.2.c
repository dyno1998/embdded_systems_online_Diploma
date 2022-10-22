/*
 * EX-5.c
 *
 *  Created on: Jul 29, 2021
 *      Author: Dyno
 */
#include <stdio.h>
int main()
{
    char g;
    printf("Enter an alphabet :");
    scanf("%c",&g);
    if(g== 'e'||g=='E'||g== 'A'||g=='a' || g=='i'|| g=='I'|| g=='O'|| g=='o'|| g=='U'|| g=='u')
    {
        printf("\r\n%c is a vowel",g);
    }
else
{
printf("\r\n%c is consonat",g);
}

}



