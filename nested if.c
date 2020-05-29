#include <stdio.h>
int main()
{
    float per;
    printf("Enter percentage: ");
    scanf("%f",&per);
    if(per>80)
    {
        printf("A Grade\n");
    }
    else
    {
        if(per<80 && per>=70)
            {
                printf("B Grade\n");
            }
        else
        {
            if(per<70 && per>=60)
                {
                    printf("C Grade\n");
                }
            else
            {
                if(per<60 && per>=45)
                    {
                        printf("D Grade\n");
                    }
                else
                    {
                        if(per<45)
                            {
                                printf("FAIL\n");
                            }
                    }
            }
        }
    }
    return 0;
}
