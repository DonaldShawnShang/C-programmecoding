#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
int t, n, x;
int a[105], b[105], nums[105];
int main()
{
    cin >> t;
    int no = 1;
    while (t--)
    {
        int flag = 1;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        reverse(b, b + n);
        for (int j = 0; j < n; j++)
        {
            if (b[j] + a[j] > x)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "Case " << no++ << ": Yes" << endl;
        else
            cout << "Case " << no++ << ": No" << endl;
    }
    return 0;
}