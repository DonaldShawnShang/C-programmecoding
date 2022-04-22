#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int n,d,cnt;
vector<int> a(n);

int main()
{
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n-1;i++)
    {
        while(a[i]>=a[i+1]){//这里用暴力cnt++,a[i+1]+=d 有案例会tle
            cnt+=(a[i]-a[i+1])/d+1;
            a[i+1]+=((a[i]-a[i+1])/d+1)*d;
        }
    }
    cout<<cnt<<endl;
    return 0;
}