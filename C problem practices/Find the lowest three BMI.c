#include<stdio.h>
int main()
{
    float height[1000],bmi[1000];
    int weight[1000];
    int i,j;
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter elements in the height : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&height[i]);
    }
    printf("\nEnter elements in the weight : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&weight[i]);
    }
    for(i=0;i<n;i++)
    {
        bmi[i]=weight[i]/(height[i]*height[i]);
    }
    printf("\nOutput : ");
    for(i=0;i<n;i++)
    {
        printf("%.1f ",bmi[i]);
    }

    float temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(bmi[i]>bmi[j])
            {
                temp=bmi[i];
                bmi[i]=bmi[j];
                bmi[j]=temp;
            }
        }
    }
    printf("\n\nOutput ascending sorted : ");
    for(i=0;i<n;i++)
    {
        printf("%.1f ",bmi[i]);
    }
    printf("\n\nBMI : ");
    for(i=0;i<3;i++)
    {
        printf("%.1f ",bmi[i]);
    }

    return 0;

}
