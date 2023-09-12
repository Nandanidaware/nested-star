/*//SOLID TRIANGLE

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
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


//Ulta Triangle

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
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


// Right side Solid Triangle

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


// one side triangle
//     *
//    **
//   ***
//    **
//     *
#include<stdio.h>
int main()
{
	int N,i;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int k=(N-i)*2;
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
	int s=0;
	for(int i=N-1;i>0;i--)
	{
		s=(N-i)*2;
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
	return 0;
}
*/


//SOLID DIMOND

#include<stdio.h>
int main()
{
	int N,i;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
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
	int p=0;
	for(int i=N-1;i>0;i--)
	{
		int p=N-i;
		for(int j=1;j<=p;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}




































