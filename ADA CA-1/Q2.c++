/* An inversion in an array is a pair of elements where the first eleement is the grater than the second element but appears before it in the array. you need to count the number of inversions in an array. how would you modify merge sort to count inversions while sorting the array*/

#include <bits/stdc++.h>
using namespace std;
// Sizes of the two subarrays
long long mergeAndCount(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays to hold the left and right subarrays
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // Copy the data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    long long invCount = 0;

    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k++] = leftArr[i++];
        }
        else
        {
            arr[k++] = rightArr[j++];
            invCount += (n1 - i);
        }
    }

    // Copy the remaining elements of leftArr[]
    while (i < n1)
        arr[k++] = leftArr[i++];

    // Copy the remaining elements of rightArr[]
    while (j < n2)
        arr[k++] = rightArr[j++];

    return invCount;
}

long long mergeSortAndCount(vector<int> &arr, int left, int right)
{
    long long invCount = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        invCount += mergeSortAndCount(arr, left, mid);

        invCount += mergeSortAndCount(arr, mid + 1, right);

        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}
int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};
    long long inversionCount = mergeSortAndCount(arr, 0, arr.size() - 1);

    cout << "Number of inversions: " << inversionCount << endl;
    return 0;
}