#include <stdio.h>
#include <string.h>

void lastname(const char *fullName)
{
    const char *lastSpace = strrchr(fullName, ' ');
    if (lastSpace)
    {
        printf("The Last name is : %s\n", lastSpace + 1);
    }
}


float average(float marks[], int n)
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    return sum / n;
}

int main()
{
    char Name[100];
    float Marks[5];
    int i;

    printf("Enter students name : ");
    gets(Name);

    printf("Enter five exam marks : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &Marks[i]);
    }

    lastname(Name);

    float taverage = average(Marks, 5);
    printf("Average marks is : %.1f\n", taverage);

    return 0;
}

