#include<stdio.h>
void main(void)
{
    int Number;



    printf("Please Enter Number ");
    scanf("%d",&Number);
    if(Number>0)
        printf("This Number %d is Positive \n ",Number);
    else if (Number<0)
        printf("This Number %d is negative \n", Number);
    else
        printf("This is Zero  \n");

    }
