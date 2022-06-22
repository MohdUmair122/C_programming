/*
Write a program to find grade of a student given his marks based 
on below 
1, 90 to 100 --> A
2, 80 to 90 --> B
3, 70 to 80 --> C
4, 60 to 70 --> D
5, marks<60 --> F
*/
#include<stdio.h>
int main(){
	int marks;
	printf("Enter the marks of a student \n");
	scanf("%d",&marks);
	if ( marks>90 && marks<=100 )
	{printf(" Your Grade is A\n");
	}
	else if ( marks>80 && marks<=90 )
	{printf(" Your Grade is B\n");
	}
	else if ( marks>70 && marks<=80 )
	{printf(" Your Grade is C\n");
	}
	else if ( marks>60 && marks<=70 )
	{printf(" Your Grade is D\n");
	}
	else 
	{
		printf("Your Grade is F\n");
	}
	return 0;
}