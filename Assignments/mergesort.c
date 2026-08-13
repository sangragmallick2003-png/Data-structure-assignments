#include <stdio.h>

// Merge two sorted subarrays
void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[10];

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int marks[10];
    int i;

    printf("Enter marks of 10 students:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Sort the array using Merge Sort
    mergeSort(marks, 0, 9);

    printf("\nSorted marks: ");
    for (i = 0; i < 10; i++)
        printf("%d ", marks[i]);

    // Lowest and highest marks
    printf("\n\nLowest marks = %d", marks[0]);
    printf("\nHighest marks = %d\n", marks[9]);

    return 0;
}