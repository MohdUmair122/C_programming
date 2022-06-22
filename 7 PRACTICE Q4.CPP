/* Q4 write a program to calculate simple interest for a set of values
representing Principle,No. of yeats,Rate of interest. */
# include<stdio.h>
int main()
{   float p,y,r;
    printf("Enter the principle \n");
    scanf("%f",&p);
    printf("Enter the No. of years \n");
    scanf("%f",&y);
    printf("Enter the rate of interest \n");
    scanf("%f",&r);
    printf("The Simple interest for given values is  %f",(p*y*r)/100);
    return 0;
}