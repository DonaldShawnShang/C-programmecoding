#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>
using namespace std;
#define FOR(i, from, to) for (int i = (int)from; i < (int)to; i++)
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    map<int, int> T;
    FOR(i, 0, n - 1)
    {
        int c, f;
        cin >> f >> c;
        T[c] = f;
    }

    FOR(k, 0, q)
    {
        vector<int> l1;

        map<int, int> l2;
        int a, b;
        cin >> a >> b;
        int aa, bb = 1;
        aa = a;
        bb = b;
        while (aa != 0)
        {
            l1.push_back(aa);
            aa = T[aa];
        }
        while (bb != 0)
        {
            l2[bb] = 1;
            bb = T[bb];
        }
        for (auto &&i : l1)
        {
            if (l2[i] == 1)
            {
                printf("Case %d: %d\n", k + 1, i);
                goto q;
            }
        }
        printf("Case %d: Invalid\n", k + 1);
    q:
        int qqq;
    }
}

/*我跟你讲思路，
你自己写，
就是你你建好那个，
那个卖朴树之后，
然后你你从那个从那个每个人跟上网上查出来一个，
先从第一个人上网上查查了，
他所所有的父亲，父和父亲的父亲查出来存在一个数组里面，
然后用这个数组的那个，从从他的他的父亲查他爷爷，
然后先查他父亲在不在你，另外那个集合里面，
另外那个人你用一个卖库存，你就这样查吗？
查出来第一个有的就是。*/