#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n, i;
    int *a;

    printf("Enter initial size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter new size: ");
    scanf("%d", &new_n);

    a = (int *)realloc(a, new_n * sizeof(int));

    if (a == NULL) {
        printf("Memory reallocation failed");
        return 1;
    }

    printf("Enter new elements:\n");
    for (i = n; i < new_n; i++)
        scanf("%d", &a[i]);

    printf("All elements:\n");
    for (i = 0; i < new_n; i++)
        printf("%d ", a[i]);

    free(a);

    return 0;
}
