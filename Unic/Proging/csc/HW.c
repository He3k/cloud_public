#include <math.h>
#include <stdio.h>

int main()
{
	double s,p,a,b,c,pr;
	a = 0; b = 0; c = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a+b+c)/2;
	printf("%lf\n", p);
	pr = (p*(p-a)*(p-b)*(p-c));
	printf("%lf\n", pr);
	s = sqrt(pr);
	printf("%lf", s);
}

