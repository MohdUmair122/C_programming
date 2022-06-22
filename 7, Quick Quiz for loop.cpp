//QUICK QUIZ : WRITE A PROGRAM TO PRINT N NATURAL NUMBER IN REVERSE ORDER
/*  Done by me correct approach h ye bhi .....
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=n;i;i--){
    	printf("The value of i is: %d \n",i);
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int n;int i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;n--){
    	printf("The value of i: %d\n",n);
    }
    return 0;
}