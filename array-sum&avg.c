#include<stdio.h>
int main() 
{
    int n, i,num[100],sum=0;
    float avg=0.0;
    printf("Enter the numbers of elements: ");
    scanf("%d",&n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average and sum are %f and %d",avg,sum);
    return 0;
}
