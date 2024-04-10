#include<stdio.h>
struct card
{
    char name[30];
    int stage;
    int hp;
};
int ends_with(char *name,char x)
{
    int i;
    char ch;
    for(i=0; name[i]!='\0'; i++)
    {
        ch=name[i];
    }
    printf("\n***%c***\n",ch);
    if(ch==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int N,i;
    printf("Total cards : ");
    scanf("%d",&N);

    struct card pk[N];
    printf("Taking Information about cards : \n\n");
    for(i=0; i<N; i++)
    {
        printf("Enter cards name : ");
        scanf("%s",pk[i].name);
        printf("Enter stage : ");
        scanf("%d",&pk[i].stage);
        printf("Enter HP : ");
        scanf("%d",&pk[i].hp);
        printf("\n");
    }
    int price,total=0;
    for(i=0; i<N; i++)
    {
        price=0;
        int zeno=ends_with(pk[i].name,'X');
        if(pk[i].stage==1 && zeno==1)
        {
            price=50+pk[i].hp+30+200;
        }
        else if(pk[i].stage==2 && zeno==1)
        {
            price=50+pk[i].hp+70+200;
        }
        else if(zeno==1)
        {
            price=50+pk[i].hp+200;
        }
        else if(pk[i].stage==1)
        {
            price=50+pk[i].hp+30;
        }
        else if(pk[i].stage==2)
        {
            price=50+pk[i].hp+70;
        }
        else
        {
            price=50+pk[i].hp;
        }
        printf("No %d cards price : %d\n",i+1,price);
        total+=price;
    }
    printf("Total price : %d\n",total);
    return 0;
}
