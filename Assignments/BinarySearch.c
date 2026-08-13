#include <stdio.h>

int binarySearch(int arr[], int n, int productID) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == productID) {
            return 1;   // Product found
        }
        else if (arr[mid] < productID) {
            low = mid + 1;   // Search right half
        }
        else {
            high = mid - 1;  // Search left half
        }
    }

    return 0;   // Product not found
}

int main() {
    int products[] = {101, 105, 110, 115, 120, 125, 130, 140};
    int n = sizeof(products) / sizeof(products[0]);
    int productID;

    printf("Enter product ID to search: ");
    scanf("%d", &productID);

    if (binarySearch(products, n, productID))
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}