//QUICK QUIZ: WRITE A PROGRAM TO PRINT FIRST NATURAL NUMBER USING FOR LOOP

#include <stdio.h>
int main(){
    int n;int i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    	printf("The value of i: %d\n",i);
    }
    return 0;
}