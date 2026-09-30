#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // 🔹 Insertion Sort logic
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        // Move elements greater than temp one position ahead
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    // 🔹 Display sorted array
    printf("\nSorted array:-\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}