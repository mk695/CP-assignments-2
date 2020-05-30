#include<stdio.h>
#include<string.h>
struct employees
{
    char name[10];
    int id;
    float salary;
};
int main()
{
    struct employees n[10];
    int i,m;
    printf("Enter no of employees");
    scanf("%d",&m);
    for(i=0;i<=m;i++)
    {
        printf("enter name:\n");
        scanf("%s",&n[i].name);
        printf("enter id:\n");
        scanf("%d",&n[i].id);
        printf("enter salary:\n");
        scanf("%f",&n[i].salary);
    }
     for(i=0;i<=m;i++)
    {
        printf("Name:\n");
        printf("%s\n",n[i].name);
        printf("emplyee id:\n");
        printf("%d\n",n[i].id);
        printf("salary is:\n");
        printf("%f\n",n[i].salary);
    }
    return 0;
}
