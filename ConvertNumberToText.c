#include<Stdio.h>
void main(void){
 int Number;
 printf("Please Enter Number Less 100 ");
 if(Number<100)
 {
    scanf("%d",&Number);

     if(Number==0)
       printf("Zero");
     else {
       if(Number<10){
            switch (Number){
              case 1:
                  printf("One");
                  break;
              case 2:
                  printf("Two");
                  break;
              case 3:
                   printf("Three");
                  break;
              case 4:
                  printf("Four");
                  break;
              case 5:
                  printf("five");
                  break;
              case 6:
                   printf("Six");
                  break;
              case 7:
                   printf("Siven");
                  break;
              case 8:
                  printf("Eight");
                  break;
              case 9:
                  printf("Nine");
                  break;
             }

     }

       else if(Number <100){
           if(Number<20){

            switch (Number){
              case 10:
                  printf("Ten");
                  break;
              case 11:
                  printf("Eleven");
                  break;
              case 12:
                   printf("Twelve");
                  break;
              case 13:
                  printf("Therten");
                  break;
              case 14:
                  printf("Fouten");
                  break;
              case 15:
                   printf("Fivten");
                  break;
              case 16:
                   printf("Sixten");
                  break;
              case 17:
                  printf("Seventeen");
                  break;
              case 18:
                  printf("Eighten");
                  break;
              case 19:
                  printf("nineten");
                  break;
             }
           }
           else {
                switch (Number/10){
              case 2:
                  printf("Tewenty");
                  break;
              case 3:
                  printf("Therety");
                  break;
              case 4:
                   printf("Fourty");
                  break;
              case 5:
                  printf("Fifty");
                  break;
              case 6:
                  printf("Sixisty");
                  break;
              case 7:
                   printf("Seventy");
                  break;
              case 8:
                   printf("Eighty");
                  break;
              case 9:
                  printf("Ninety");
                  break;
             }
                switch (Number%10){
                      case 1:
                          printf("One");
                          break;
                      case 2:
                          printf("Two");
                          break;
                      case 3:
                           printf("Three");
                          break;
                      case 4:
                          printf("Four");
                          break;
                      case 5:
                          printf("five");
                          break;
                      case 6:
                           printf("Six");
                          break;
                          break;
                      case 7:
                           printf("Siven");
                          break;
                      case 8:
                          printf("Eight");
                          break;
                      case 9:
                          printf("Nine");
                          break;
                     }
           }


          }

    }
 }
printf("Bigger Than Scope !!!!! \n");


}

