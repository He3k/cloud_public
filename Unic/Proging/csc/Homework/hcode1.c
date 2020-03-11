#include <stdio.h>

int main ()
{
   double  x,xi,n,s;
   x=1;s=0;
   scanf("%lf", &n);
   while (s!=10) {
   x=((n/x+x)/2);
   printf("%.4lf\n",x);
   s=s+1;}
}

