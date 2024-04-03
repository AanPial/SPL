#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

int Leapyear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{

    FILE *inpf = fopen("input.txt", "r");
    if (inpf == NULL)
    {
        printf("Failed to open the input file.\n");
        return 1;
    }


    struct Date d[5];
    for (int i = 0; i < 5; i++)
    {
        fscanf(inpf, "%d %d %d", &d[i].year, &d[i].month, &d[i].day);
    }

    fclose(inpf);

    printf("Stored dates:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d/%02d/%02d\n", d[i].day, d[i].month, d[i].year);
    }

    printf("\nDates on leap years:\n");
    for (int i = 0; i < 5; i++)
    {
        if (Leapyear(d[i].year))
        {
            printf("%02d/%02d/%d\n", d[i].day, d[i].month, d[i].year);
        }
    }

    return 0;
}
