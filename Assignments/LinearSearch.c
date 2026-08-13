// In a library the books are sorted using their Access number. Access number is the whole number that consists maxmimum three digit number whole  number. Consider an array where the access numbers of the books are stored in an organized fashion. The librarian wants to search for a specific acccess number in thr array. Implement this using Linear search (C program)

#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int access[100];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input access numbers
    printf("Enter the access numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &access[i]);
    }

    printf("Enter the access number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (access[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Access number %d found at position %d.\n", key, i + 1);
    else
        printf("Access number %d not found.\n", key);

    return 0;
}