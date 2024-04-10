#include<stdio.h>
#include<string.h>
void revwords(char *name)
{
    int i,j=0,k,len;
    int temp;
    len=strlen(name);
    for(i=0;i<=len;i++)
    {
        if(name[i]==' ' || name[i]=='\n' || name[i]=='\0')
        {
            k=i-1;
            while(j<k)
            {
                temp=name[j];
                name[j]=name[k];
                name[k]=temp;
                j++;
                k--;
            }
            j=i+1;
        }
    }
    int temp1;
    for(i=0;i<len/2;i++)
    {
        temp1=name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=temp1;
    }
    printf("%s",name);
}

int main()
{
    char str[100];

    printf("Enter str : ");
    gets(str);

    revwords(str);
}
