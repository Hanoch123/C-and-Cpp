#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[100];
    int id;
    float exp,sal;
};
int main()
{
    int i;
    struct employee e[5];
    for(i=0;i<5;i++)
    {
        printf("Enter employee %d Name: ",i+1);
        scanf("%s",&e[i].name);
        printf("Enter employee %d ID: ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter employee %d Experience: ",i+1);
        scanf("%f",&e[i].exp);
        printf("Enter employee %d Salary: ",i+1);
        scanf("%f",&e[i].sal);
    }
    printf("\n*************************************\n");
    for(i=0;i<5;i++)
    {
        printf("\nEmployee %d Name: %s",i+1,e[i].name);
        printf("\nEmployee %d ID: %d",i+1,e[i].id);
        printf("\nEmployee %d Experience: %f",i+1,e[i].exp);
        printf("\nEmployee %d Salary: %f",i+1,e[i].sal);
    }
    return 0;
}
