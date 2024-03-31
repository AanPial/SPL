#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter three numbers: \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    int max;

    max=(n1>n2 && n1>n3)?n1:(n2>n3)?n2:n3;

    printf("Maximum number is %d\n",max);

    return 0;
}
