#include<stdio.h>
int main()
{
   int i,j,a,b;
   i=0;j=0;
   scanf("%d",&a);
   scanf("%d",&b);
   int mx[a][b];
   for (i=0;i<a;++i)
   {
      for (j=0;j<b;++j)
      {
         scanf("%d",&mx[j]);
         printf("%d\n",i);
         printf("%d\n",j);
         printf("%d\n",mx[i][j]);
      }
   }
}
