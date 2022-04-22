#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int t,n,a[100000],flag;

int main()
{
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>n;
        flag=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(a[j]<a[i])
                    {
                        flag++;
                        break;
                    }
        cout<<flag<<endl;
    }
    return 0;
}