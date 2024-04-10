#include<stdio.h>

const int city=2;
const int day=7;

int main()
{
    int arr[city][day];
    int i,j;

    for(i=0;i<city;i++)
    {
        for(j=0;j<day;j++)
        {
            printf("Enter city %d day %d temperature : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n\nDisplaying Value : \n\n");

    for(i=0;i<city;i++)
    {
        for(j=0;j<day;j++)
        {
            printf("City %d day %d temperature : %d\n",i+1,j+1,arr[i][j]);
        }
    }
}
