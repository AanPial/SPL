#include<stdio.h>

void swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;

    printf("Swap in sawap function : %d %d\n",*num1,*num2);
}

int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    printf("Bef swap in main : %d %d\n",n1,n2);

    swap(&n1,&n2);

    printf("after swap in main function : %d %d\n",n1,n2);

    return 0;
}
