#include <stdio.h>
int call(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int x, y;

    printf("Enter a number : ");
    scanf("%d%d", &x, &y);
    int i;
    printf("Perfect Numbers are : ");
    for (i = x; i <= y; i++)
    {
        int perfect = call(i);
        if (perfect == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}