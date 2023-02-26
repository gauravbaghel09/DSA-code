#include <iostream>
using namespace std;

bool TWO_D_binarysec(int arr[][4], int row, int col, int target)
{
    int s = 0;
    int end = row * col - 1;
    int mid = s + (end - s) / 2;
    while (s <= end)
    {
        int rowind = mid / col;
        int colind = mid % col;

        if (arr[rowind][colind] == target)
        {
            return true;
        }
        if (arr[rowind][colind] < target)
        {
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = s + (end - s) / 2;
    }
    return false;
}
int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 4, 15, 16}, {17, 18, 19, 20}};
    int row = 5;
    int col = 4;
    int target = 100;
    bool ans = TWO_D_binarysec(arr, row, col, target);
    if (ans == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }
    return 0;
}