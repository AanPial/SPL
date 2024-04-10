#include<stdio.h>
int main()
{
    int n,num,newnum;

    printf("Enter num");
    scanf("%d",&num);
    printf("Enter nth:");
    scanf("%d",&n);

    newnum=(~(1<<n))&num;

    printf("New num: %d",newnum);

    return 0;
}
