//Program of SJF with Non-Preemption.
#include <stdio.h>
int main()
{
    int i,n,temp;
    float sum1,avg1,sum2,avg2,sum3,avg3;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    int b[n],w[n],c[n],t[n];
    printf("Enter value of various processes: \n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]: ",i);
        scanf("%d",&b[i]);
    }
    for(int a=0;a<n-1;a++)
    {
        for(int c=0;c<n-a-1;c++)
        {
            if(b[c]>b[c+1])
            {
                temp=b[c];
                b[c]=b[c+1];
                b[c+1]=temp;
            }
        }
    }
    printf("If consider all processes arrival time is 0.\nThen Gantt Chart: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\nWaiting time: \n");
    for(i=0;i<n;i++)
    {
        w[i]=0;
        w[i]=w[i-1]+b[i-1];
        printf("%d\t",w[i]);
    }
    printf("\n");
    sum1 = w[0] + w[1] + w[2] + w[3] + w[4];
    avg1 = sum1 / n;
    printf("Average waiting time is %.2f\n", avg1);
    printf("Completion time: \n");
    for(i=0;i<n;i++)
    {   
        c[i] = c[i-1] + b[i];
        printf("%d\t", c[i]);
    }
    printf("\n");
    sum2 = c[0] + c[1] + c[2] + c[3] + c[4];
    avg2 = sum2 / n;
    printf("Average completion time is %.2f\n", avg2);
    return 0;
}