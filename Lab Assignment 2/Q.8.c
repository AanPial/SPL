#include<stdio.h>

void fibonacci(int n, int a, int b, int count)
{
    if(n<=0||count>=3)
        {
            return;
        }

    int tarx=a+b;

    if(tarx % 2 == 0)
        {
            printf("%d $ ",tarx);
        }
    else if (tarx % 2 == 1)
        printf("%d # ",tarx);
    else
        printf("0 & ");

    fibonacci(n-1,b,tarx,count+1);
}

int main()
{
    int n;
    printf("Input : ");
    scanf("%d",&n);

    printf("Output:\n");
    if (n>=1)
    {
        printf("0 & ");
    }
    if (n>=2)
    {
        printf("1 # ");
    }

    fibonacci(n-2,0,1,0);

    printf("\n");
    return 0;
}

