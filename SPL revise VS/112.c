#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    float mark;
};
int main()
{
    struct student st[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter student%d name : ",i+1);
        scanf("%s",&st[i].name);
        printf("Enter student%d roll : ",i+1);
        scanf("%d", &st[i].roll);
    }
    printf("\n\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student%d Name : %s\n",i+1, st[i].name);
        printf("Student%d Roll : %d\n",i+1, st[i].roll);
    }

    return 0;
}