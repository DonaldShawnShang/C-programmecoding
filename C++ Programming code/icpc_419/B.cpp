#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int n, fz, fm, gcd;
double d;
int GCD(int x, int y)
{
    return y ? GCD(y, x % y) : x;
}
int main()
{
    cin >> n;
    cin >> d;
    int sig = ((int)d == d) ? 1 : 0;
    if (sig == 1)
    {
        cout << d << " 0.0000000000" << endl;
        return 0;
    }
    else
    {
        if (n == 1 && d - (int)d == 0.5)
        {
            cout << "More than one!" << endl;
            return 0;
        }
        else
        {
            fz = 999999999, fm = 1;
            for (int i = 1; i <= n; i++)
            {
                int ans = (int)((1.0 * d * i) + 0.5);
                if (fabs(1.0 * ans / i - d) < fabs(1.0 * fz / fm - d))
                {
                    fz = ans;
                    fm = i;
                    gcd = GCD(fz, fm);
                    fz /= gcd;
                    fm /= gcd;
                }
                if (fabs(1.0 * ans / i - d) == fabs(1.0 * fz / fm - d))
                {
                    int fz2 = ans, fm2 = i;
                    int gcd2 = GCD(fz2, fm2);
                    fz2 /= gcd2;
                    fm2 /= gcd2;
                    if (fz2 != fz || fm2 != fm)
                    {
                        cout << "More than one!" << endl;
                        return 0;
                    }
                }
            }
            printf("%d/%d %.10lf\n", fz, fm, fabs(1.0 * fz / fm - d));
        }
    }
    return 0;
}