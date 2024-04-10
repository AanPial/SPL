#include<stdio.h>




int main()
{
    const int max=1000;
    int source[max],dst[max];
    int n,i,count1=0,count2=0;

    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter elements to the source of array : \n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&source[i]);
    }
    printf("Array 1 : ");
    for(i=0;i<n;i++)
    {
       printf("%d ",source[i]);
       count1++;
    }
    printf("\nElements of source array are : %d\n",count1);
    for(i=0;i<n;i++)
    {
       dst[i]=source[i];
    }
    printf("Array2 : ");
    for(i=0;i<n;i++)
    {
       printf("%d ",dst[i]);
       count2++;
    }
    printf("\nElements of destination array are :%d",count2);

    return 0;
}
