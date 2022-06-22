#include <stdio.h>
int main(){
    int n,i;
    printf("ENter your number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    	printf("The value is: %d\n",i*n);
    }
    return 0;
}