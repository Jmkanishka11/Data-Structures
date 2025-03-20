#include <stdio.h>
#include <stdlib.h>
void main() {
    int a[100], size, i;
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
}