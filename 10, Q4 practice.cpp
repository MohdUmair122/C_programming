#include<stdio.h>
int main()
{   char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {  printf("It is a lowercase character\n");
    }
    else{
    	printf("It is a Uppercase character\n");
    }
    return 0;	
}