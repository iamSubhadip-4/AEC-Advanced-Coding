#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 1; i < n; i++) {
        if ((arr[i] - arr[0]) % k != 0) {
            printf("-1\n");
            return 0;
        }
    }

    qsort(arr, n, sizeof(int), compare);

    int median = arr[n / 2];

    int total = 0;

    for (int i = 0; i < n; i++) {
        int diff = arr[i] - median;

        if (diff < 0)
            diff = -diff;

        total += diff / k;
    }

    printf("%d\n", total);

    return 0;
    
}
