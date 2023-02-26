#include <bits/stdc++.h>
using namespace std;
int binarysec(vector<int> arr, int target, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }

        if (arr[s] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int search(vector<int> arr, int target)
{
    int pivotIndex = findPivot(arr);

    if (target >= arr[0] && target <= arr[pivotIndex])
    {
        int ans = binarysec(arr, target, 0, pivotIndex);
        return ans;
    }
    if (pivotIndex + 1 < arr.size() && target >= arr[pivotIndex + 1] && target <= arr[arr.size() - 1])
    {
        int ans = binarysec(arr, target, pivotIndex + 1, arr.size() - 1);
        return ans;
    }
    return -1;
}
int main()
{
    vector<int> arr{8, 1, 2, 3, 4, 5, 6, 7};
    int ans = findPivot(arr);

    cout << "pivot element is : " << ans << endl;
    // int ans2 = binarysec(arr, 4, 0, arr.size());
    // cout << "binary search : " << ans2 << endl;
    int ans3 = search(arr, 4);
    cout << "rotated arr search : " << ans3 << endl;
    return 0;
}
