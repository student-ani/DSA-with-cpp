/*you have a sorted array of integers and you need to find the first and last occurence of a given target element. for example in the array [5,7,7,8,8,10] the target 8 appears at the indices 3 and 4. how would you use bst find thses positions.*/

#include <bits/stdc++.h>
using namespace std;

int first_occurance(const vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}
int last_occurance(const vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}
int main()
{
    vector<int> nums = {3, 4, 4, 5, 6};
    int target = 4;
    cout << "First Occurrence: " << first_occurance(nums, target) << endl;
    cout << "Last Occurrence: " << last_occurance(nums, target) << endl;
    return 0;
}