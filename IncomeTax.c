#include<stdio.h>
void main(void){
     int totalIncome;
     double tax;
     printf("Enter Salary ");
     scanf("%d",&totalIncome);
     if(totalIncome<=7000)
     {
         tax=0.0;
         printf("Exempted ");
     }
     else if(totalIncome<=20000)//10
        tax=(20000-7000)*0.1;
     else if(totalIncome<=45000)
        tax=(20000-7000)*0.1+(totalIncome-20000)*0.15;
     else if(totalIncome<=200000)
        tax=(20000-7000)*0.1+(45000-20000)*0.15+(totalIncome-45000)*0.2;
     else
        tax= (20000-7000)*0.1+(45000-20000)*0.15+(200000-450000)*0.2+(totalIncome-200000)*.4;
     printf("tax = %10.2f for Salary = %d ",tax,totalIncome);
}
