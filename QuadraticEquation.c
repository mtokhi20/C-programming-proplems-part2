#include<stdio.h>
#include <stdlib.h>
#include <math.h>
void main (void){
  double a,b,c,sqr,x,y;
  printf("Hello You Can Solve Quadratic Equation With a,b And c as Shape(aX^2+bX+c )\n");
  printf("Enter a ");
  scanf("%lf",&a);
  printf("Enter b ");
  scanf("%lf",&b);
  printf("Enter c ");
  scanf("%lf",&c);
  // X = (-b +- sqrt(b*b -4*a*c))/ 2*a
  sqr= abs(b*b- 4*a*c);
  printf("sqr = %4.2lf \n", sqr);
  x=(-b+sqrt(sqr))/2*a;
  y=(-b-sqrt(sqr))/2*a;
  printf("The Answer \n");
  printf("X = %4.2lf \n", x);
  printf("Y = %4.2lf \n", y);

}
