#include <stdio.h>

int main()
{
	int k,s;
	int i=1;
	scanf("%d", &s);
	printf("Step:%d\n",s);
	s=s+1;
	k = 0;
	while (s!=0)
	{
	for(int i=0;i!=s; i++)
	{
	 printf(" ");
	}
	for(int i=0;i!=k; i++)
	{
	 printf("#");
	}
	printf("\n");
	s=s-1;
	k=k+1;
	}
}
