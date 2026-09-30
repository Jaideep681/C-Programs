#include <stdio.h>
void selectionsort(int arr[],int size){
    int i,j,min,temp;
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main(){
    int i,n;
    printf("Enter number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in array:-\n",n);
    for(i=0;i<n;i++){
        printf("A[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printf("Sorted array:-\n");
    for(i=0;i<n;i++){
        printf("A[%d]: %d\n",i+1,arr[i]);
    }
    return 0;
}