#include <stdio.h>

void swap(int* pa, int* pb)
{
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

void sort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int main(void) {
    int arr[5] = { 1, 18, 9, 6, 3 };
    int n = 5;

    sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}