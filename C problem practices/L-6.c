#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter the number of students : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter for student %d:\n",i);
        float a;
        scanf("%f",&a);
        float hw;
        scanf("%f",&hw);
        float ct;
        scanf("%f",&ct);
        float mt;
        scanf("%f",&mt);
        float tf;
        scanf("%f",&tf);

        float total;
        total=a+hw+ct+(mt/1.666)+(tf/2.5);
        printf("Student%d : %.1f\n",i,total);
        if(total>=90)
        {
            printf("Student%d : A",i);
        }
        else if(total>=86 && total<=89)
        {
            printf("Student%d : A-",i);
        }
        else if(total>=82 && total<=85)
        {
            printf("Student%d : B+",i);
        }
        else if(total>=78 && total<=81)
        {
            printf("Student%d : B",i);
        }
        else if(total>=74 && total<=77)
        {
            printf("Student%d : B-",i);
        }
        else if(total>=70 && total<=73)
        {
            printf("Student%d : C+",i);
        }
        else if(total>=66 && total<=69)
        {
            printf("Student%d : C",i);
        }
        else if(total>=62 && total<=65)
        {
            printf("Student%d : C-",i);
        }
        else if(total>=58 && total<=61)
        {
            printf("Student%d : D+",i);
        }
        else if(total>=55 && total<=57)
        {
            printf("Student%d : D",i);
        }
        else if(total<55)
        {
            printf("Student%d : F",i);
        }
        printf("\n\n");

    }

    return 0;
}
