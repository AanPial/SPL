#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    float cgpa;
};

int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();

    struct student s[n];

    for (i=0;i<n;i++)
    {
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].cgpa);
        getchar();
        printf("\n");
    }
    int h = 0;
    for (i=1;i<n;i++)
    {
        if (s[i].cgpa > s[h].cgpa)
        {
            h = i;
        }
    }
    printf("Name: %s\n", s[h].name);
    printf("ID: %d\n", s[h].id);
    printf("CGPA: %.2f\n", s[h].cgpa);

    return 0;
}
