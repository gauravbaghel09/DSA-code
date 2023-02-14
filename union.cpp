#include <bits/stdc++.h>
using namespace std;
int main()
{
    // first method using STL.

    // int first[] = {5, 10, 15, 20, 25};
    // int second[] = {1, 20, 3, 25};
    // int n = sizeof(first) / sizeof(int);  // size of first arr.
    // int m = sizeof(second) / sizeof(int); // size of second arr.

    // vector<int> v(100);
    // vector<int>::iterator it, i;

    // sort(first, first + n);
    // sort(second, second + m);

    // // Using default function
    // it = set_union(first, first + n, second, second + m, v.begin()); // union using predefind funtion
    // cout << "union is : " << endl;
    // for (i = v.begin(); i != it; ++i)
    // {
    //     cout << *(i) << " ";
    // }
    // cout << endl;

    // return 0;

//second method.
    
    // array 1
//     int arr1[] = {1, 3, 5, 7, 9};
//     int n1 = 5;

//     // array 2
//     int arr2[] = {2, 4, 6, 8};
//     int n2 = 4;

//     // creating a vector
//     vector<int> ans;

//     // copying elements of arr1 to ans vector
//     for (int i = 0; i < n1; i++)
//     {
//         ans.push_back(arr1[i]);
//     }

//     // copying elements of arr2 to ans vector
//     for (int i = 0; i < n2; i++)
//     {
//         ans.push_back(arr2[i]);
//     }

//     // printing vector
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

//third method.
    
int arr1[] = {1, 2, 3, 4, 5};
int arr2[] = {2, 3, 8};
int n = sizeof(arr1) / sizeof(int);
int m = sizeof(arr2) / sizeof(int);
vector<int> ans;
int i, j, k;

for (i = 0; i < n; i++)
{
    ans.push_back(arr1[i]);
}

for (j = 0; j < m; j++)
{
    ans.push_back(arr2[j]);
}

for (k = 0; k < ans.size(); k++)
{
    cout << ans[k] << " ";
}
cout << endl;

cout << "union : " << endl;

for (i = 0; i < ans.size(); i++)
{
    k = 0;
    for (j = i + 1; j < ans.size(); j++)
    {
        if (ans[i] == ans[j])
        {
            k = 1;
            break;
        }
    }
    if (k == 0)
    {
        cout << ans[i] << " ";
    }
}
}
