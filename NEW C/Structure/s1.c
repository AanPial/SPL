#include<stdio.h>
struct st
{
    char name[20];
    int age;
    int num[3];
};
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    struct st arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Ener name for %d : ",i+1);
        scanf("%s",&arr[i].name);
        printf("Ener age for %d : ",i+1);
        scanf("%d",&arr[i].age);
        printf("Ener num for %d : ",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i].num[j]);
        }
    }

    for(int i = 0; i < n; i++) 
    {
        printf("Name: %s, Age: %d, Numbers: %d %d %d\n", arr[i].name, arr[i].age, arr[i].num[0], arr[i].num[1], arr[i].num[2]);
    }
}