#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct trip
{
    int bg, ed;
    long long pl;
} trips[325];

bool cmp(const trip &a, const trip &b)
{
    if (a.pl != b.pl)
    {
        if (a.pl > b.pl)
            return true;
        else
            return false;
    }
    else if ((a.ed - a.bg) != (b.ed - b.bg))
        return (a.ed - a.bg) < (b.ed - b.bg);
    else
        return a.bg < b.bg;
}

int main()
{
    long long x, y, count = 0;
    vector<long long> nums(18);
    long long tt, ans;
    while (cin >> x)
    {
        int pla = 0;
        count++;
        nums[0] = x;
        y = 1;
        while (getchar() != '\n')
        {
            cin >> nums[y++];
        }
        ans = nums[0];
        trips[0].bg = 0, trips[0].ed = 0, trips[0].pl = nums[0];
        for (int i = 0; i < y; i++)
        {
            tt = 1;
            for (int j = i; j < y; j++)
            {
                tt *= nums[j];
                if (tt >= ans)
                {
                    trips[pla].bg = i, trips[pla].ed = j;
                    trips[pla].pl = tt;
                    ans = tt;
                    pla++;
                }
            }
        }
        if (y > 1)
            sort(trips, trips + pla, cmp);
        cout << "Case " << count << ": " << trips[0].pl << ' ' << trips[0].bg << '-' << trips[0].ed << endl;
    }
    return 0;
}