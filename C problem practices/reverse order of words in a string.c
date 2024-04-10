#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Input string : ");
    gets(str);

    int i,len,n;
    char temp;
    len=strlen(str);
    n=len-1;

    for(i=0; i<=n; i++)
    {
        temp=str[i];
        str[i]=str[n];
        str[n]=temp;
        n--;
    }
    printf("\n%s\n",str);

    int j=0,k;
    for(i=0; i<=len; i++)
    {
        if(str[i]==' ' || str[i]=='\0' || str[i]=='\n')
        {
            k=i-1;
            while(j<k)
            {
                temp=str[j];
                str[j]=str[k];
                str[k]=temp;
                j++;
                k--;
            }
            j=i+1;
        }
    }
    printf("\n%s\n",str);

    return 0;
}

