#include <stdio.h>
#define MAX 10
//Insertion at beginning in the array.
/*int main(){
    int a[MAX]={0,1,2,3,4,5},size=6,i,item;
    printf("Enter item to insert: ");
    scanf("%d",&item);
    for(i=size;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=item;
    size++;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}*/

//Insertion at any position in the array.
/*int main(){
    int a[MAX]={1,2,3,5,6,7},size=6,i,item,pos;
    printf("Enter item to insert: ");
    scanf("%d",&item);
    printf("Enter a index position to insert data: ");
    scanf("%d",&pos);
    for(i=size;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=item;
    size++;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}*/

//Insertion at ending in the array.
int main(){
    int a[MAX]={1,2,3,4,5,6},size=6,i,item;
    printf("Enter item to insert: ");
    scanf("%d",&item);
    a[size]=item;
    size++;
    for(i=0;i<size;i++){
        printf("A[%d]: %d\n",i,a[i]);
    }
    return 0;
}