#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float total,average,percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    average=(a+b+c+d+e)/5;
    percentage=(total/500)*100;

    printf("Total = %.2f\n",total);
    printf("Average = %.2f\n",average);
    printf("Percentage = %.2f\n",percentage);

    return 0;
}
