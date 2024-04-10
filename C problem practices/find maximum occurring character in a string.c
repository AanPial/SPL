#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int arr[100];

    printf("Input string :");
    gets(str);

    int i,j,len,count;
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        arr[i]=-1;
    }

    for(i=0;str[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j] || str[i]==str[j]-'a'+'A' || str[i]==str[j]-'A'+'a')
                {
                    count++;
                    arr[j]=0;
                }
        }
        if(arr[i]!=0)
        {
            arr[i]=count;
        }
    }
    int max=arr[0];
    int index;

    for(i=0;i<len;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    printf("\nMaximum occurring character is '%c' = %d times.",str[index],max);

    return 0;
}
