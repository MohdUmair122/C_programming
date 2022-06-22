#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d,r1,r2;
    printf("Enter the coefficient of x² Quadratic eqn:\n");
    scanf("%f",&a);
    printf("Enter the coefficient of x Quadratic eqn:\n");
    scanf("%f",&b);
    printf("Enter the constant of Quadratic eqn:\n");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if(d>0) {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("The Real&Distinct roots are r1: %f and r2: %f",r1,r2);
    }
    else if(d=0) {
        r1=r2=(-b)/2*a;
        printf("The Real&Equal roots are r1: %f and r2: %f",r1,r2);
    }
    else {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("The roots are imaginary r1: %f & r2: %f",r1,r2);
    }
    return 0;
}