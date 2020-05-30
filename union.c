#include<stdio.h>
#include<string.h>
#define csize 100
union address
{
    char name[csize];
    char housename[csize];
    char cityname[csize];
    char state[csize];
    char pin[csize];
};
int main()
{ 
    union address n[10];
    int i,m;
    printf("Enter no of employees");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("enter name:\n");
        scanf("%s",n[i].name);
        printf("enter housename:\n");
        scanf("%s",n[i].housename);
        printf("enter cityname:\n");
        scanf("%s",n[i].cityname);
        printf("enter state:\n");
        scanf("%s",n[i].state);
        printf("enter pin:\n");
        scanf("%s",n[i].pin);
    }
     for(i=0;i<m;i++)
    {
        printf("Name:");
        printf("%s\t",n[i].name);
        printf("Housename:");
        printf("%s\t",n[i].housename);
        printf("cityname:");
        printf("%s\t",n[i].cityname);
        printf("state:");
        printf("%s\t",n[i].state);
        printf("pin:");
        printf("%s\t",n[i].pin);
    }
    return 0;
}
