//BUTTERFLY

#include<stdio.h>
int main()
{
	int N,i;
	int s=1;
	int p=1;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int k=((N*4)-(4*s));
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		for(int j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=p;j++)
		{
			printf("* ");
		}
		printf("\n");
		k=k-4;
		p=p+1;
		s=s+1;
	}
	for(int i=N;i>0;i--)
	{
		int M=((N*4)-(4*i));
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		for(int j=1;j<=M;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		M=M-4;
	}
	return 0;
}



















