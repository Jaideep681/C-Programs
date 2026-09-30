#include <stdio.h>
int main() {
    int n,i,min,max;
    printf("Enter number of elements will be in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    min=max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Minimum number in the element: %d\n",min);
    printf("Maximum number in the element: %d\n",max);
    return 0;
}