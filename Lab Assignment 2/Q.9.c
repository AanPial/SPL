#include <stdio.h>
#include <string.h>

struct Customer
{
    int id;
    char name[100];
    char birthday[12];
    char house[12];
    int purchase[3];
};

int substringChecker(char *mainString, char *searchString)
{
    if (strstr(mainString, searchString) != NULL)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int totalcust;
    printf("Num of Customers: ");
    scanf("%d", &totalcust);

    struct Customer c[totalcust];

    for (int i = 0; i < totalcust; i++)
    {
        printf("\nCustomer %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(c[i].name, sizeof(c[i].name), stdin);
        c[i].name[strcspn(c[i].name, "\n")] = '\0';

        printf("Birthday: ");
        scanf("%s", c[i].birthday);

        printf("House: ");
        scanf("%s", c[i].house);

        printf("Purchase: ");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &c[i].purchase[j]);
        }
    }

    printf("\nList of Loyal Customers:\n");

    int foundGryffindor = 0;
    int foundSlytherin = 0;
    float maxGryffindorAverage = 0.0;
    float maxSlytherinAverage = 0.0;
    char loyalGryffindorName[100];
    char loyalSlytherinName[100];

    for (int i = 0; i < totalcust; i++)
    {
        float average = (c[i].purchase[0] + c[i].purchase[1] + c[i].purchase[2]) / 3.0;
        if (strcmp(c[i].house, "Gryffindor") == 0 && substringChecker(c[i].name, "est"))
        {
            foundGryffindor = 1;
            if (average > maxGryffindorAverage)
            {
                maxGryffindorAverage = average;
                strcpy(loyalGryffindorName, c[i].name);
            }
        }
        else if (strcmp(c[i].house, "Slytherin") == 0 && substringChecker(c[i].name, "rus"))
        {
            foundSlytherin = 1;
            if (average > maxSlytherinAverage)
            {
                maxSlytherinAverage = average;
                strcpy(loyalSlytherinName, c[i].name);
            }
        }
    }

    if (!foundGryffindor)
    {
        printf("Gryffindor:\nNil\n");
    }
    else
    {
        printf("Gryffindor:\n%s\n", loyalGryffindorName);
    }

    if (!foundSlytherin)
    {
        printf("\nSlytherin:\nNil\n");
    }
    else
    {
        printf("\nSlytherin:\n%s\n", loyalSlytherinName);
    }

    return 0;
}

