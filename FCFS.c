//Program of First Come First Serve (FCFS).
#include <stdio.h>
int main()
{
    int i, n;
    float sum1, avg1, sum2, avg2, sum3, avg3;
    printf("Enter number of processes: \n");
    scanf("%d", &n);
    int b[n], w[n], c[n], t[n];
    printf("Enter value of various processes: \n");
    for (i = 0; i <= 4; i++)
    {
        printf("P[%d]: ", i);
        scanf("%d", &b[i]);
    }
    printf("\nBurst Time is: \n");
    for (i = 0; i <= 4; i++)
    {
        printf("P[%d]: ", i);
        printf("%d\n", b[i]);
    }
    printf("\nWaiting time is: \n");
    for (i = 0; i <= 4; i++)
    {
        w[i] = 0;
        w[i] = b[i - 1] + w[i - 1];
        printf("%d\t", w[i]);
    }
    printf("\n\n");
    sum1 = w[0] + w[1] + w[2] + w[3] + w[4];
    avg1 = sum1 / 5;
    printf("Average waiting time is %.2f", avg1);
    printf("\n\nCompletion time: \n");
    for (i = 0; i <= 4; i++)
    {
        c[i] = c[i - 1] + b[i];            //c[i] = w[i] + b[i];
        printf("%d\t", c[i]);
    }
    printf("\n\n");
    sum2 = c[0] + c[1] + c[2] + c[3] + c[4];
    avg2 = sum2 / 5;
    printf("Average completion time is %.2f", avg2);
    /*printf("\n\nTurn around time: \n");
    for (i = 0; i <= 4; i++)
    {   
        t[i] = w[i] + b[i];
        printf("%d\t", t[i]);
    }
    printf("\n\n");
    sum3 = t[0] + t[1] + t[2] + t[3] + t[4];
    avg3 = sum3 / 5;
    printf("Average turnaround time is %.2f", avg3);*/
    return 0;
}