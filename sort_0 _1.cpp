#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {0, 1, 1, 0, 0, 1, 1, 0, 1, 0};
    int i = 0;
    int j = arr.size() - 1;

    while (j > i)
    {
        while (arr[i] == 1 && i < j)
        {
            while (arr[j] == 0 && i < j)
            {
                swap(arr[i], arr[j]);
            }
            j--;
        }
        i++;
    }
    for (int k = 0; k < arr.size(); k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}


//O(n) time complexity 

//#include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0};
//     int st = 0;
//     int end = arr.size() - 1;
//     while (st < end)
//     {
//         if (arr[st] == 1)
//         {
//             if (arr[end] != 1)
//             {
//                 swap(arr[st], arr[end]);
//             }
//             end--;
//         }else{
//             st++;
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
