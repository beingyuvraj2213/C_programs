#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ELEMENTS 100

int main() {
    int array[MAX_ELEMENTS], n, i, j, max1 = -1, max2 = -1, count1 = 0, count2 = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i+1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
                array[j] = -1;
            }
        }
        if (count > count1) {
            count2 = count1;
            max2 = max1;
            count1 = count;
            max1 = array[i];
        } else if (count > count2 && array[i] != max1) {
            count2 = count;
            max2 = array[i];
        }
    }
    printf("The second most frequent element is %d.\n", max2);
    return 0;
}
