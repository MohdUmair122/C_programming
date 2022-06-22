/*Q WRITE A PROGRAM TO FIND THE GREATEST NUMBER INPUT 
TAKEN BY THE USER ? */
#include <stdio.h>
int main()
{   int a,b,c,d;
    printf("Enter your first no :\n");
    scanf("%d",&a);
    printf("Enter your second no :\n");
    scanf("%d",&b);
    printf("Enter your third no :\n");
    scanf("%d",&c);
    printf("Enter your fourth no :\n");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d)
    { printf("The greatest no. is %d\n",a);
    }
    else if(b>a&&b>c&&b>d)
    { printf("The greatest no. is %d\n",b);
    }
    else if(c>a&&c>b&&c>d)
    { printf("The greatest no. is %d\n",c);
    }
    else{
      printf("The greatest no. is %d\n",d);
    }
    return 0;
}    
    