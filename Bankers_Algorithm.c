#include <stdio.h>
int main(){
    int n,m,i,j,k;
    n=5,m=3;
    /*int allocation[n][m],max[n][m],available[m];
    printf("Enter number of processes: ");
    scanf("%d",&n);
    printf("Enter number of resourses: ");
    scanf("%d",&m);
    printf("Enter allocation of processes: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter value of [%d][%d]: ",i+1,j+1);
            scanf("%d",&allocation[i][j]);
        }
    }
    printf("Enter maximum need of processes: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter value of [%d][%d]: ",i+1,j+1);
            scanf("%d",&max[i][j]);
        }
    }
    printf("Enter available resouuces of processes: \n");
    for(j=0;j<m;j++){
        printf("Enter value of [%d]: ",j+1);
            scanf("%d",&available[j]);
    }*/
    int allocation[5][3]={
        {0,1,0}, {2,0,0}, {3,0,2}, {2,1,1}, {0,0,2}
    };
    int max[5][3]={
        {7,5,3}, {3,2,2}, {9,0,2}, {2,2,2}, {4,3,3}
    };
    int available[3]={3,3,2};
    int f[n],ans[n],ind=0,y=0;
    for(k=0;k<n;k++){
        f[k]=0;
    }
    int need[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            need[i][j]=max[i][j]-allocation[i][j];
        }
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            if(f[i]==0){
                int flag=0;
                for(j=0;j<m;j++){
                    if(need[i][j]>available[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans[ind++]=i;
                    for(y=0;y<m;y++){
                        available[y]+=allocation[i][y];
                    }
                    f[i]=1;
                }
            }
        }
    }
    int flag=1;
    for(i=0;i<n;i++){
        if(f[i]==0){
            flag=0;
            printf("The following sequence is not a safe.");
            break;
        }
    }
    if(flag==1){
        printf("The following sequence is a safe.\n");
        for(i=0;i<n-1;i++){
            printf(" P%d ->",ans[i]);
        }
        printf(" P%d",ans[n-1]);
    }
    return 0;
}