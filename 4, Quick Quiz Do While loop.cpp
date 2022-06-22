/* Quick Quiz 2 ch4 */
#include <stdio.h>
int main(){
    int i;int n=0;
    printf("Enter the value of i is:\n");
    scanf("%d",&i);
    do{
    	printf("The value of n is: %d\n",n+1);
    	n++;
    }while(n<i);
    return 0;
}