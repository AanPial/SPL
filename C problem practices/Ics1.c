#include<stdio.h>
int main()
{
    int age;
    int quantity;
    float total_cost;

    printf("Enter age : ");
    scanf("%d",&age);
    printf("Enter quantity : ");
    scanf("%d",&quantity);
    total_cost=quantity*32;
    if(quantity>1000)
    {
        total_cost=total_cost-(total_cost* .1225);
    }
    else if(quantity>=500)
    {
        total_cost=total_cost-(total_cost* .0225);
    }
    else if(quantity<50)
    {
        total_cost=total_cost-(total_cost* (-.01));
    }
    if(age>60)
    {
        total_cost=total_cost-(total_cost* .05);
    }

    printf("Total cost = $%.2f",total_cost);

    return 0;
}
