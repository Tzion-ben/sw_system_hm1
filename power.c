#include "myMath.h"
double Pow(double x, int y) 
{//counting a power in iductive way
double p=1;

for(int i=0;i<y;i++){

p=p*x;
}
return p;
}//end pow
double Exp(int x)//counting e^x
{
return Pow(2.7182,x);
}//end exp
