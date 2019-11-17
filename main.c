#include <stdio.h>
#include "myMath.h"

#define TOW 2  //all this define is if in the future
#define THREE 3//we will want to change thw constants
#define FOUR 4
#define FIVE  5

int main ()
{
printf("Please insert a real number :\n");
double x=0;
scanf("%lf", &x);

float f_x1=sub((add(Exp((int)x),Pow(x,THREE))),TOW);
float f_x2=add(mul(THREE,x),mul(TOW,Pow(x,TOW)));
float f_x3=sub((div((mul(FOUR,Pow(x,THREE))),FIVE)),mul(x,TOW));

printf("The value of f(x1)=e^x+x^3-2 at the point %.4f is : %.4f\n",x,f_x1);
printf("The value of f(x2)=3x+2x^2 at the point %.4f is : %.4f\n",x,f_x2);
printf("The value of f(x3)=(4x^3)/5-2x at the point %.4f is : %.4f\n",x,f_x3);

return 0;
}
