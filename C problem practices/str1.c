#include<stdio.h>
#include<string.h>

struct Students
{
    char name[30];
    int id;
    float mark;
    char grade;
};
int main()
{
    struct Students st[100];

    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter student%d Name : \n",i+1);
        scanf("%s",&st[i].name);
        printf("Enter student%d Id : \n",i+1);
        scanf("%d",&st[i].id);
        printf("Enter student%d mark : \n",i+1);
        scanf("%f",&st[i].mark);
    }
    printf("\n\nDisplay : \n");

    for(i=0;i<n;i++)
    {
        printf("Student%d Name : %s\n",i+1,st[i].name);
        printf("Student%d Id : %d\n",i+1,st[i].id);
        printf("Student%d mark : %.2f\n",i+1,st[i].mark);
        if(st[i].mark>90)
        {
            printf("Student%d Grade : A\n",i+1);
        }
        else if(st[i].mark>80)
        {
            printf("Student%d Grade : B\n",i+1);
        }
        else if(st[i].mark>70)
        {
            printf("Student%d Grade : C\n",i+1);
        }
        else
        {
            printf("Student%d Grade : F\n",i+1);
        }
        printf("\n\n");
    }
    printf("\n\n");
    int max=0,min=0;
    for(i=0;i<n;i++)
    {
        if(st[i].mark > st[max].mark)
        {
            max=i;
        }
        else if(st[i].mark < st[min].mark)
        {
            min=i;
        }

    }
    printf("Student%d got the maximum marks\n",max+1);
    printf("Student%d got the minimum marks\n",min+1);

    return 0;

}

