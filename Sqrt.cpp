#include <bits/stdc++.h>
using namespace std;
int sqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid * mid > target)
        {
            e = mid - 1;
        }
        if (mid * mid < target)
        {
            ans = mid;
            s = mid + 1;
        }
        if (mid * mid == target)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter a num to find sqrt : " << endl;
    cin >> n;
    int ans = sqrt(n);
    cout << "sqrt of number : " << ans << endl;

    int pre;
    cout << "enter pre : " << endl;
    cin >> pre;
    double step = 0.1;
    double finalans = ans;
    for (int i = 0; i < pre; i++)
    {
        for (double j = finalans; j * j <= n; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << "final ans : " << finalans << endl;
}
