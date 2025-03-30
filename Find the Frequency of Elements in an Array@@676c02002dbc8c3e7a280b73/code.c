#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    
    int arr[N];
    printf("Enter the elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element in the array to create a frequency array
    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Create a frequency array of size max+1 (for all values from 0 to max)
    int freq[max + 1];
    for (int i = 0; i <= max; i++) {
        freq[i] = 0;  // Initialize frequency array to 0
    }

    // Count frequency of each element in the original array
    for (int i = 0; i < N; i++) {
        freq[arr[i]]++;
    }

    // Print frequency of each element
    printf("Element frequencies:\n");
    for (int i = 0; i <= max; i++) {
        if (freq[i] > 0) {
            printf("%d: %d\n", i, freq[i]);
        }
    }

    return 0;
}
