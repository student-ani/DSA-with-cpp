#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoids potential overflow
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target;
    std::cout << "Enter the target number: ";
    std::cin >> target;
    int result = binary_search(arr, target);
    if (result != -1) {
        std::cout << "The target number " << target << " is found at index " << result << std::endl;
    } else {
        std::cout << "The target number " << target << " is not found in the array" << std::endl;
    }
    return 0;
}