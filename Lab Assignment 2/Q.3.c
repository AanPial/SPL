#include <stdio.h>

int is_prime(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    if (x <= 3)
    {
        return 1;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int power_of_2(int x)
{
    if (x == 1)
    {
        return 1;
    }
    if (x % 2 != 0)
    {
        return 0;
    }
    return power_of_2(x / 2);
}

int is_mersenne(int x)
{
    if (!is_prime(x))
    {
        return 0;
    }
    return power_of_2(x + 1);
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_mersenne(num))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

