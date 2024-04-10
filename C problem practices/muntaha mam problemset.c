#include<stdio.h>
#include<ctype.h>
int main()
{
    char str_a[36];
    char str_b[36];

    printf("Input : ");
    gets(str_a);

    int i,j=0,lenb=0;
    for(i=0;str_a[i]!='\0';i++)
    {
        if(isdigit(str_a[i]))
        {
            str_b[j]=str_a[i];
            j++;
            lenb++;
        }
    }
    str_b[j]='\0';

    if(lenb==0)
    {
        printf("Output : 0");
    }
    else
    {
        printf("Output : %s",str_b);
    }

    return 0;
}
