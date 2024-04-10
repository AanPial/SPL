#include<stdio.h>

struct dateyear
{
    int date;
    int month;
    int year;
};
int leap(int n)
{
    if((n%4==0 && n%100!=0) || (n%400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    FILE*input;

    input=fopen("dmy.txt","r");

    if(input==NULL)
    {
        printf("Not found");
        return 1;
    }
    struct dateyear dt[5];
    int i;

    for(i=0;i<5;i++)
    {
        fscanf(input,"%d/%d/%d",&dt[i].date,&dt[i].month,&dt[i].year);
    }
    printf("All 5 years :\n\n");
    for(i=0;i<5;i++)
    {
        printf("%02d/%02d/%04d\n",dt[i].date,dt[i].month,dt[i].year);
    }
    printf("\n\nLeap years :\n\n");
    for(i=0;i<5;i++)
    {
        if(leap(dt[i].year)==1)
        {
             printf("%02d/%02d/%04d\n",dt[i].date,dt[i].month,dt[i].year);
        }
    }
    fclose(input);
    FILE*output;
    output=fopen("dmyy.txt","w");
    if(output==NULL)
    {
        printf("Not found!");
        return 1;
    }
    for(i=0;i<5;i++)
    {
        fprintf(input,"%02d/%02d/%04d\n",dt[i].date,dt[i].month,dt[i].year);
    }
    fprintf(output,"\n\nLeap years :\n\n");
    for(i=0;i<5;i++)
    {
        if(leap(dt[i].year)==1)
        {
             fprintf(output,"%02d/%02d/%04d\n",dt[i].date,dt[i].month,dt[i].year);
        }
    }
    fclose(output);
    return 0;
}
