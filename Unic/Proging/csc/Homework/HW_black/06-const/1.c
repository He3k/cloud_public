#include<stdio.h>
int main()
{
 int i,k,a,c;
 c=0;i=0;
 printf("Введите 1 элемент и кол-во элементов:");
 printf("\n");
 scanf("%d",&a);
 scanf("%d",&k);
 for (i=1;i<=k;i++)
 {
  c=(c+a);
  a=(a*2);
 }
 printf("%d\n",c);
}
