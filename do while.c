#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter Numbers to be added: ");
    do{
        scanf("%d",&a);
        sum=sum+a;
    }while(a!=0);
    printf("Sum = %d",sum);
    return 0;
}
