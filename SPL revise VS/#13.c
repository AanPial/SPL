#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter three number : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3)
    {
        printf("%d is maximum.",n1);
    }
    else if(n2>n3)
    {
        printf("%d is maximum.",n2);
    }
    else
    {
        printf("%d is maximum.",n3);
    }

    return 0;

}
