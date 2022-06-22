/*Q1 Write a program to find out whether a student is pass or fail if it require
total 40% and at least 30% in each subject to pass. 
ASSUMING MARKS IS OUT OF 100 */

#include <stdio.h>
int main()
{   float phy,chem,math,total;
    printf("Enter the marks of phy \n");
    scanf("%f",&phy);
    printf("Enter the marks of chem \n");
    scanf("%f",&chem);
    printf("Enter the marks of math \n");
    scanf("%f",&math);
    total=(phy+chem+math)/3;
    if((total<40)||phy<33||chem<33||math<33)
    {   printf("Your percentage is %f and you are fail\n",total);
    }	
    else{
          printf("Your percentage is %f and you are pass\n",total);	
    }
	return 0;
}