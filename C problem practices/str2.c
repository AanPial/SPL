#include<stdio.h>
#include<string.h>
struct students
{
    char name[30];
    int id;
    float mark;
};
int main()
{
    struct students st[100];
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);

    int i,sum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter Student%d name : \n",i+1);
        scanf("%s",&st[i].name);
        printf("Enter Student%d ID : \n",i+1);
        scanf("%d",&st[i].id);
        printf("Enter Student%d Mark : \n",i+1);
        scanf("%f",&st[i].mark);
    }

    printf("\n\nDisplay : \n");

    for(i=0;i<n;i++)
    {
        printf("%s  %d  %.2f\n",st[i].name,st[i].id,st[i].mark);
        sum=sum+st[i].mark;
    }
    float avrg;

    avrg=sum/n;

    printf("Average = %.2f\n",avrg);

    return 0;
}
