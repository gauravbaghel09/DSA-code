#include <iostream>
using namespace std;
int findsqr(int n)
{
    int ans = -1;
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left search
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enetr a number : " << endl;
    cin >> n;
    int ans = findsqr(n);
    cout << "squar root of " << n << " is : " << ans << endl;

    int precision;
    cout << "enter the num of floating digit in precision  : ";
    cin >> precision;
    double finalans = ans;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * j <= n; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << "final ans in precision : " << finalans << endl;
    return 0;
}