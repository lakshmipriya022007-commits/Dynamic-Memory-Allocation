#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *a;

    printf("Enter n: ");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = a[0];
    int smallest = a[
