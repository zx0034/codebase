#include <vector>
using namespace std;
template <typename T>
int binary_search(vector<T> nums, T const &target)
{
    // 搜索区间[left,right]
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
    }
    return -1;
}

template <typename T>
int left_bound_search(vector<T> nums, T const &target)
{
    // 搜索区间 [left,right]
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            right = mid - 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
    }
    // 边界处理
    if (left >= nums.size() || nums[left] != target)
    {
        return -1;
    }
    return left;
}
template <typename T>
int right_bound_search(vector<T> nums, T const &target)
{
    // 搜索区间 [left,right]
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
    }
    // 边界处理
    if (right < 0 || nums[right] != target)
    {
        return -1;
    }
    return right;
}