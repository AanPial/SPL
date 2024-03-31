#include<stdio.h>

struct student
{
    char name[30];
    int roll;
    float mark;
};
int main()
{
    struct student st;

    printf("Enter student name : ");
    gets(st.name);
    printf("Enter student roll : ");
    scanf("%d",&st.roll);
    printf("Enter student mark : ");
    scanf("%f",&st.mark);

    printf("\n\n\n");

    printf("Name : %s\n",st.name);
    printf("Roll : %d\n",st.roll);
    printf("Mark : %.2f\n",st.mark);

    return 0;
}