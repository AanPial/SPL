#include<stdio.h>
struct student
{
    char name[30];
    int id;
    float cgpa;
};
int main()
{
    int n;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    getchar();
    struct student st[n];

    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter student%1 name : ",i+1);
        fgets(st[i].name,sizeof(st[i].name),stdin);
        printf("Enter ID : ");
        scanf("%d",&st[i].id);
        printf("Enter CGPA : ");
        scanf("%f",&st[i].cgpa);
        getchar(); //getchar use korar karon holo line escape thekanor jonno
    }
    int max=-1;

    for(i=0;i<n;i++)
    {
        if(st[i].cgpa>st[max].cgpa)
        {
            max=i;
        }
    }
    printf("\n\nName : %s\n",st[max].name);
    printf("ID = %d\n",st[max].id);
    printf("CGPA = %.1f",st[max].cgpa);

    return 0;
}
