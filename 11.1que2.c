 
#include <stdio.h>

void square(int *arr, int size) {
    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d, ", *(arr + i) * *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    square(arr, size);

    return 0;
}


 
 
    