//Ans: to the question no # (8)
//count the number of elements in the array that are greater than the average

#include<stdio.h>
int main()
{
    float arr[1000];
    int n,i,count=0;
    float sum=0,average;

    //taking array elements and size
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }

    //array sum & average
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    average=sum/n;

    //counting greater elements than average
    for(i=0;i<n;i++)
    {
        if(arr[i]>average)
        {
            count++;
        }
    }
    printf("\n%d\n",count);

    return 0;
}
