//Damroo Triangle

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		int s=N-i;
		for(int j=1;j<=s;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=1;i<=N;i++)
	{
		int k=N-i;
		for(int j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
