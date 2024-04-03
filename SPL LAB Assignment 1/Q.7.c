//Ans: to the question no # (7)
//Coprime or not

#include<stdio.h>
int main()
{
    int arr[10000],mrr[10000];
    int a,b,size1=0,size2=0;
    int i,l,j=0,k=0;

    int coprime=1;

    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);

    //assigning factors in separate array
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            arr[j]=i;
            size1++;
            j++;
        }
    }
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
        {
            mrr[k]=i;
            size2++;
            k++;
        }
    }

    //checking Coprime or not

    for(i=1;i<size1;i++)
    {
        for(l=1;l<size2;l++)
        {
            if(arr[i]==mrr[l])
            {
                coprime=0;
                break;
            }
        }
    }
    printf("\n");
    if(coprime==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    printf("\n");
    return 0;

}
