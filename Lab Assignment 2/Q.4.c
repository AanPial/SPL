#include <stdio.h>
#include <string.h>

struct card
{
    char name[60];
    int stage;
    int HP;
};

int ends_with(char *input, char letter)
{
    int len = strlen(input);
    if (len == 0)
    {
        return 0;
    }
    return (input[len - 1] == letter);
}

int main()
{
    int N;
    scanf("%d", &N);

    struct card cards[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d", cards[i].name, &cards[i].stage, &cards[i].HP);
    }

    int total_price = 0;
    for (int i = 0; i < N; i++)
    {
        int price = 50 + cards[i].HP;

        if (cards[i].stage == 1)
        {
            price += 30;
        }
        else if (cards[i].stage == 2)
        {
            price += 70;
        }

        if (ends_with(cards[i].name, 'X'))
        {
            price += 200;
        }

        total_price += price;
    }

    printf("\n\nTotal price of all cards = %d\n\n", total_price);

    return 0;
}

