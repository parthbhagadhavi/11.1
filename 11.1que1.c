
 
 
 #include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
    