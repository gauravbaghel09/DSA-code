#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr{1, 4, 5, 7, 8, 9};
    reverse(arr);
    printArr(arr);
    return 0;
}
