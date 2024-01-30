#include <iostream>
using namespace std;

void selectionSortMinMax(int arr[], int n, int &minValue, int &maxValue) {
    if (n <= 0) {
        std::cerr << "Array size should be greater than 0." << std::endl;
        return;
    }
    minValue = arr[0];
    maxValue = arr[0];

    for (int i = 1; i < n; ++i) {

        if (arr[i] < minValue) {
            minValue = arr[i];
        }

        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {
    const int size = 6;
    int arr[size] = {1, 3, 0, 2, 6, 7};
    int minValue, maxValue;

    selectionSortMinMax(arr, size, minValue, maxValue);

    std::cout << "Minimum value: " << minValue << std::endl;
    std::cout << "Maximum value: " << maxValue << std::endl;

    return 0;
}
