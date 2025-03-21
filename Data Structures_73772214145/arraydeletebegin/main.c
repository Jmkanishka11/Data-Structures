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
    printf("\n");
    if(size == 0){
        printf("Array is empty");
    }
    for(i = 0; i < size-1; i++){
        a[i] = a[i+1];
    }
    size--;
    printf("The updated values are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}