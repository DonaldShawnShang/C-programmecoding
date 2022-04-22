#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int n;
int main()
{
    int no=1;
    while(cin>>n)
    {
        int mlen=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x
            a.push_back(x);
        }
        vector< vector<int> > dp1(n+1,vector<int>(n+1,0));
        for(int i=0;i<n;i++) dp1[i][i]=1;
        for(int j=n-1;j>=0;j--)
        {
            for(int i=j;i<n;i++)
            {
                if(a[j]==a[i])
                {
                    if(i-j<=1) 
                        dp1[j][i]=0;
                    else if(dp1[j+1][i-1]!=0)
                        dp1[j][i]=0;
                    if(dp1[j][i]!=0&&i-j+1>mlen)
                    {
                        mlen=i-j+1;
                    }
                }
            }
        } 
        if(mlen<3) 
            {
                cout<<"Case "<<no++<<": 0"<<endl;
            }
        else {
            cout<<"Case "<<no++<<": "<<mlen<<endl;
        }
    }
    return 0;
}