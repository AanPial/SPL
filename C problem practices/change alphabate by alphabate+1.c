#include<stdio.h>
int main()
{
    char str[100];

    printf("Input any string : ");
    gets(str);

    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            printf(" ");
        }
        else if((str[i]>='a' && str[i]<='y') || (str[i]>='A' && str[i]<='Y'))
        {
            printf("%c",str[i]+1);
        }
        else if(str[i]=='z')
        {
            printf("a");
        }
    }

    return 0;

}

