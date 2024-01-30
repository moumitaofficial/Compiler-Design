#include <iostream>

int main() {
    int x;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> x;
    int arr[x];
    std::cout << "Enter the elements of the array, separated by space:\n";
    for (int i = 0; i < x; ++i) {
        std::cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / x;
    std::cout << "The average value of the elements in the array is: " << average << std::endl;

    return 0;
}
