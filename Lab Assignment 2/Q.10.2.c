#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

int leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    struct Date d[5];
    for (int i = 0; i < 5; i++)
    {
        fscanf(inputFile, "%d %d %d", &d[i].year, &d[i].month, &d[i].day);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(outputFile, "%d %d %d\n", d[i].year, d[i].month, d[i].day);
    }
    fprintf(outputFile, "\n");

    for (int i = 0; i < 5; i++)
    {
        if (!leapyear(d[i].year))
        {
            fprintf(outputFile, "%02d/%02d/%d\n", d[i].day, d[i].month, d[i].year);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
