//RECTANGLE
#include<stdio.h>
int main()
{
	int N,M;
	printf("ENTER THE NUMBER OF ROWS:- ");
	scanf("%d",&N);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&M);
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=N;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
