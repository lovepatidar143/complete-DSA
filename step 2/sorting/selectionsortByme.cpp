#include <iostream>
#include <algorithm>  // for std::swap
using namespace std;

int main() {
    int arr[10] = {1, 2, 0, 45, 2, 3, 83, 5, 82, 6};
    int l = sizeof(arr) / sizeof(arr[0]);

    // Selection Sort
    for (int i = 0; i <= l - 2; i++) {
        int min_index = i;

        for (int j = i + 1; j <= l - 1; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }

        // Swapping values using array indexes
        swap(arr[i], arr[min_index]);
    }

    // Print the sorted array
    for (int i = 0; i < l; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}