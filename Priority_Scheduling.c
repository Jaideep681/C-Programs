#include <stdio.h>
int main(){
    int i,j,n,temp;
    float sum1=0,sum2=0,avg1,avg2;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int b[n],w[n],c[n],p[n];
    printf("Enter value of various burst time processes: \n");
    for(i=0;i<n;i++){
        printf("\nEnter P[%d]: ",i+1);
        scanf("%d",&b[i]);
    }
    printf("Enter value of various priority processes: \n");
    for(i=0;i<n;i++){
        printf("\nEnter P[%d]: ",i+1);
        scanf("%d",&p[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(p[i]>p[j]){
                // Swap burst_time
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                // Swap priority
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }    
        }
    }
    for(i=0;i<n;i++){
        w[i]=0;
        w[i]=b[i-1]+w[i-1];
    }
    for(i=0;i<n;i++){
        c[i]=w[i]+b[i];
    }
    printf("\nProcess\t\tBurst Time\tPriority\tWaiting Time\tCompletion Time\n");
    for(i=0;i<n;i++){
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,b[i],p[i],w[i],c[i]);
    }
    for(i=0;i<n;i++){
        sum1+=w[i];
        sum2+=c[i];
    }
    avg1=sum1/n;
    avg2=sum2/n;
    printf("\nAverage Waiting Time: %.2f\n",avg1);
    printf("\nAverage Completion Time: %.2f\n",avg2);
    return 0;
}