#include <stdio.h>
#define MAX 10
//Modification at beginning in the array.
/*int main(){
    int a[MAX]={-1,1,2,3,4,5},size=6,i,item;
    printf("Enter item to modify data: ");
    scanf("%d",&item);
    for(i=size;i>=0;i--){
        a[i]=a[i];
    }
    a[0]=item;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}*/

//Modification at any position in the array.
/*int main(){
    int a[MAX]={1,2,3,9,5,6},size=6,i,item,pos;
    printf("Enter item to modify data: ");
    scanf("%d",&item);
    printf("Enter a index position to modify data: ");
    scanf("%d",&pos);
    for(i=size;i>=pos;i--){
        a[i]=a[i];
    }
    a[pos-1]=item;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}*/

//Modification at ending in the array.
int main(){
    int a[MAX]={1,2,3,4,5,7},size=6,i,item;
    printf("Enter item to modify data: ");
    scanf("%d",&item);
    a[size-1]=item;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}