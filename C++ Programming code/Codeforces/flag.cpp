#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int n,m;
int a[105][105];
int b[10]
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {    for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        } 
        sort(a[i][0],a[i][m-1]);
        if(a[i][0]!=a[i][m-1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i=0;i<)
}