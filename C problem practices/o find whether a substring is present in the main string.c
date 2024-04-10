#include<stdio.h>
int main()
{
    char str1[100],str2[100];

    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);

    int len1=0,len2=0;
    int i,j;

    for(i=0; str1[i]!='\0'; i++)
    {
        len1++;
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        len2++;
    }
    int match=1,ismatch=0;
    for(i=0; i<len1; i++)
    {
        match=1;
        for(j=0; j<len2; j++)
        {
            if(str1[i+j] != str2[j])
            {
                match=0;
                break;
            }
        }
        if(match==1)
        {
            ismatch=1;
            break;
        }
    }

    if(ismatch ==1 )
    {
        printf("Substring matches");
    }
    else
    {
        printf("Substring does not match");
    }

    return 0;
}

