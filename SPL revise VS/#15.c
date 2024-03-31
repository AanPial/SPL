#include<stdio.h>
int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);

    if(num%5==0 && num%11==0)
    {
        printf("The number is divisible by 5 and 11 both.");
    }
    else if (num%11==0)
    {
        printf("The number is divisible by 11");
    }
    else if(num%5==0)
    {
        printf("The number is divisible by 5.");
    }
    else
    {
        printf("The number is not divisible by 5 and 11.");
    }
    return 0;
}
