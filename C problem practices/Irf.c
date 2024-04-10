#include<stdio.h>
int main()
{
    float math,sci;

    printf("Enter the number of Math : ");
    scanf("%f",&math);
    printf("Enter the number of science : ");
    scanf("%f",&sci);

    if(math>89 && sci>80)
    {
        printf("Sabbirs father will buy him a PS5");
    }
    else
    {
        printf("Will not buy him a ps5");
    }
    return 0;
}
