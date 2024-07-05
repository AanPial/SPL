#include<stdio.h>
#include<stdlib.h>
struct pt
{
    char name[20];
    int age;
    int num[3];
};
struct pt s;
struct pt *ptr;
int main()
{
    printf("Enter name (for s) : ");
    scanf("%s",&s.name);
    printf("Enter age (for s) : ");
    scanf("%d",&s.age);
    
    printf("Name : %s\nAge : %d\n",s.name,s.age);

    ptr=(struct pt*)malloc(sizeof(struct pt));
    if(ptr==NULL)
    {
        printf("loctation setting failed.");
        return 1;
    }

    printf("Enter name (for ptr) : ");
    scanf("%s",&ptr->name);
    printf("Enter age (for ptr) : ");
    scanf("%d",&(*ptr).age);

    printf("Name : %s\nAge : %d\n",ptr->name,ptr->age);

    return 0;
}