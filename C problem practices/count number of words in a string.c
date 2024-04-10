#include<stdio.h>
#include<stdio.h>
int main()
{
    char str[100];

    printf("Input string : ");
    gets(str);

    int i,count=0,len;
    len=strlen(str);

    for(i=0;i<=len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            continue;
        }
        else
        {
            if((str[i-1]>='a' && str[i-1]<='z') || (str[i-1]>='A' && str[i-1]<='Z'))
            {
                count++;
            }
        }
    }
    printf("\nTotal Number of Words : %d\n",count);

    return 0;
}
