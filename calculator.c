#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers:\n");
    printf("num1 = ");
    scanf("%d",&a);
    printf("num2 = ");
    scanf("%d",&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
    printf("Difference of %d and %d is %d\n",a,b,a-b);
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
    printf("Division of %d and %d is %d\n",a,b,a/b);
    printf("Modulous of %d and %d is %d\n",a,b,a%b);
    return 0;
}
