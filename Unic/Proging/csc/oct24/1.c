#include<stdio.h>

int main()
{
 int a[5];
 int i,k,b;
 for (i=0; i<=4; i++)
 {
  scanf("%d", &a[i]);
  printf("%d\n",a[i]);
 }

 for (i=0; i<=4; i++)
 {
  if (a[i+1]<a[i])
  {
   b=a[i];
   a[i]=a[i+1];
   a[i+1]=b;
   k=k+1;
   printf("%d",a[i]);
  }
 }
}
