#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int id;
    float cg;
};
int main()
{
    int i,n;
    printf("Enter student number : ");
    scanf("%d",&n);

    struct student st[n];
    
    printf("Enter students information : \n");
    for(i=0;i<n;i++)
    {
        printf("%d.Name : ",i+1);
        getchar();//it is use to reduce the gets glitch in C
        gets(st[i].name);
        printf("%d.ID : ",i+1);
        scanf("%d",&st[i].id);
        printf("%d.CG : ",i+1);
        scanf("%d",&st[i].cg);
        printf("\n\n");

    }
}