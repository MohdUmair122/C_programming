//BY For Loop ....
/*#include <stdio.h>
int main(){
    int i,n=10,sum=0;
    for(i=0;i<=n;i++){
    	sum+=i;
    }
    printf("thr value is(1 to 10) is: %d\n",sum);
    return 0;
}
*/
// BY DO WHILE LOOP......
#include <stdio.h>
int main(){
    int i=0,n=10,sum=0;
    do{
    	sum+=i;
    	i++;
    }while(i<=n);
    printf("the sum of(1 to 10)is: %d\n",sum);
    return 0;
}
