
//Righht angled triangle

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
/*
//ULTA right angled  triangle

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


//Right side right angled triangle

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
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
}




//Back side

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=0;
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		k=k+2;
			
	}
	return 0;
}



//***
//**
//*
//*
//**
//***
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMNBER:- ");;
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++);
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
		
}*/

