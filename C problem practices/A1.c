#include<stdio.h>
#include<string.h>
void lastname(char *name)
{
    int i,j=0,k=0,len;
    len=strlen(name);
    for(i=0;i<len+1;i++)
    {
        if(name[i]=='\0')
        {
           while(name[i-k]!=' ')
           {
               k++;
           }
        }
    }
    int n=len-k;
    printf("Last name : ");
    for(i=n;i<len;i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
}
void avg(float *mark,int n)
{
    int i;
    float sum=0.0;
    for(i=0;i<n;i++)
    {
        sum+=mark[i];
    }
    float average;
    average=sum/5;
    printf("Average = %.1f\n",average);

}

int main()
{
    char str[100];

    printf("Enter str : ");
    gets(str);
    float mark[5];
    int i;
    printf("Enter 5 exam mark : ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&mark[i]);
    }
    lastname(str);
    avg(mark,5);

    return 0;
}
