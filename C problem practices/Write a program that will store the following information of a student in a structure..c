#include<stdio.h>
struct student
    {
        char name[50];
        int id;
        int mark[5];
    };
int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct student st[n];
    int i,j,ct,total;
    for(i=0;i<n;i++)
    {
        printf("Enter student%d name : \n",i+1);
        scanf("%s",st[i].name);
        printf("Enter student%d ID : \n",i+1);
        scanf("%d",&st[i].id);
        printf("Enter student%d mark : \n",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%d",&st[i].mark[j]);
        }
        total=0;
        for(j=0;j<5;j++)
        {
            total+=st[i].mark[j];
        }
        printf("Student%d Total mark = %d\n\n",i+1,total);
    }

    for(ct=0;ct<5;ct++)
    {
        int max=-1;
        char hname[30];
        for(i=0;i<n;i++)
        {
            if(st[i].mark[ct]>max)
            {
                max=st[i].mark[ct];
                strcpy(hname,st[i].name);
            }
        }
        printf("Ct%d highest scorer %s\n",ct+1,hname);
    }

    return 0;
}
