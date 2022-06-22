#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if (n==1)
	{
		printf("Your no. is 1\n");
	}
	else if (n==2)
	{
		printf("Your no. is 2\n");
	}
	else if (n==3)
	{
		printf("nYour no. is 3\n");
	}
	else 
	{
		printf("your no. is not 1,2&3\n");
	}
	return 0;
}