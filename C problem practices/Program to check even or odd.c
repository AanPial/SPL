#include<stdio.h>

int evenodd(int n)
{
    int wow;
    if(n%2==0)
    {
       wow=1;
       return wow;
    }
    else
    {
       wow=0;
       return wow;
    }
}
int main()
{
    int n;

    printf("Enter Number : \n");
    scanf("%d",&n);

    int c=evenodd(n);

    if(c==1)
    {
       printf("\nEven\n");
    }
    else
    {
       printf("\nOdd\n");
    }

    return 0;
}
