#include<stdio.h>
void main(void){
    int grade;
    printf("Enter Student Grade ");
    scanf("%d",&grade);

          if(grade<50)
              printf("This studnt is fail");
          else if (grade<65)
              printf("This studnt is Pass");
          else if (grade<80)
              printf("This studnt is good");
          else if (grade<90)
             printf("This studnt is very good");
          else
            printf("This studnt is Excellent");
}
