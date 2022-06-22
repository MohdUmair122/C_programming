//Q1 write a program to calculate area of a rectangle.
//(a)using hard coded inputs.
//(b)using inputs supplied by the user.
// ans (a)
//#include<stdio.h>
//int main()
//{
//    int a = 4;
//    int b = 5;
//    printf("the length of a rectangle:%d\n",a);
//    printf("the breath of a rectangle:%d\n",b);
//    printf("the area of a rectangle is:%d",a*b);
//    return 0;
//}
//ans(b)
#include<stdio.h>
int main()
{   int a,b;
    printf("length \n");
    scanf("%d",&a);
    printf("breath \n");
    scanf("%d",&b);
    printf("The area of rectangle is: %d",a*b);
    return 0;
}