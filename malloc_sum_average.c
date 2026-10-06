#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int *a;
    float average;

    printf("Enter n: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    free(a);

    return 0;
}
