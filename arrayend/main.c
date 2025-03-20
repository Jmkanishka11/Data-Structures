#include <stdio.h>
#include <stdlib.h>
void main() {
    int a[100], size, i, element;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the values: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("The values are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter the element: ");
    scanf("%d", &element); 
    a[size] = element;
    size++;
    printf("The updated values are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}