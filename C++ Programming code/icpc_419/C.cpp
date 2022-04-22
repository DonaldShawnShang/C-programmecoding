#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;
int xs, xt, ys, yt;
int x, y;
int main()
{
    cin >> xs >> ys >> xt >> yt;
    if (xs != xt && ys != yt)
    {
        x = abs(xs - xt);
        y = abs(ys - yt);
    }
    else if (xs == xt && ys != yt)
    {
        y = abs(ys - yt);
        x = 2 * (y / 2);
    }
    else if (xs != xt && ys == yt)
    {
        x = abs(xs - xt);
        y = 2 * (x / 2);
    }
    cout << x + y << endl;
    return 0;
}