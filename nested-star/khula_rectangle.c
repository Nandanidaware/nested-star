//RIGHT SIDE OPEN RECTANGLE
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=8;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("*");
			int A=(8*2)-2;
			for(int j=1;j<=A;j++)
			{
				printf(" ");
		  	}
		  	printf("\n");
		}
	}
	return 0;
}
