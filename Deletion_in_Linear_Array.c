#include <stdio.h>
#define MAX 10
//Deletion at beginning in the array.
/*int main(){
    int a[MAX]={0,1,2,3,4,5},size=6,i;
    for(i=0;i<size;i++){
        a[i-1]=a[i];
    }
    size--;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}*/

//Deletion at any position in the array.
/*int main(){
    int a[MAX]={1,2,0,3,4,5},size=6,i,pos;
    printf("Enter a index position to delete: ");
    scanf("%d",&pos);
    for(i=pos;i<size;i++){
        a[i-1]=a[i];
    }
    size--;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}*/

//Deletion at ending in the array.
int main(){
    int a[MAX]={1,2,3,4,5,0},size=6,i;
    size--;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}