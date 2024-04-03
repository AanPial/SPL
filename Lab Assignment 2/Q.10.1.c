#include <stdio.h>
#include <string.h>

void detectRole(const char *email)
{
    if (strstr(email, "@bscse") != NULL)
    {
        printf("%s: Student\n", email);
    }
    else if (strstr(email, "@cse") != NULL)
    {
        printf("%s: Teacher\n", email);
    }
    else
    {
        printf("%s: Role not determined\n", email);
    }
}

int count(const char *emails[], int numEmails)
{
    int teacherCount = 0;
    for (int i = 0; i < numEmails; i++)
    {
        if (strstr(emails[i], "@cse") != NULL)
        {
            teacherCount++;
        }
    }
    return teacherCount;
}

int main()
{
    int i,n;
    printf("Enter the number of emails : ");
    scanf("%d",&n);
    const char *emails[n];
    printf("Enter 5 emails:\n");

    for (i = 0; i < n; i++)
    {
        char email[100];
        printf("Email %d: ", i + 1);
        scanf("%s", email);
        emails[i] = strdup(email);
    }

    printf("\nEmail roles:\n");
    for (i = 0; i < n; i++)
    {
        detectRole(emails[i]);
    }

    int nteach = count(emails, n);
    printf("\nNumber of teachers: %d\n", nteach);

    for (i = 0; i < n; i++)
    {
        free((void *)emails[i]);
    }

    return 0;
}

