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
        getchar();
        gets(st[i].name);
        printf("%d.ID : ",i+1);
        scanf("%d",&st[i].id);
        printf("%d.CG : ",i+1);
        scanf("%f",&st[i].cg);

    }

    printf("\n\nHere....:\n");
    int max,s;
    max=st[0].cg;

    for(i=0;i<n;i++)
    {
        if(st[i].cg>max)
        {
            max=st[i].cg;
            s=i;
        }
    }
    printf("\nName : %s",st[s].name);
    printf("\nID : %d",st[s].id);
    printf("\nCG : %.2f\n",st[s].cg);

    return 0;
}