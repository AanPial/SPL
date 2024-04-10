#include<stdio.h>
#include<string.h>

void detect(char *email)
{
    if(strstr(email,"@bscse")!=NULL)
    {
        printf("%s - stdent\n",email);
    }
    else if(strstr(email,"@cse")!=NULL)
    {
        printf("%s - teacher\n",email);
    }
    else
    {
        printf("%s - Role not determined\n");
    }
}
int count(char *email)
{
    int count=0;
    if(strstr(email,"@cse")!=NULL)
    {
        count=1;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    char *emails[n];
    int i;
    for(i=0;i<n;i++)
    {
        char email[100];
        printf("email%d : ",i+1);
        scanf("%s",email);
        emails[i]=strdup(email);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        detect(emails[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        int c=count(emails[i]);
        sum=sum+c;
    }
    printf("%d",sum);

    return 0;
}
