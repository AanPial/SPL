#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter string : ");
    gets(str);

    int i,len,count=0;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
        {
            continue;
        }
        else
        {
            if((str[i-1]>='a' && str[i-1]<='z') || (str[i-1]>='A' && str[i-1]<='Z') || str[i]=='\0' || (str[i-1]>='0' && str[i-1]<='9'))
            {
                count++;
            }
        }
    }
    printf("Output : %d\n",count);

    return 0;
}
