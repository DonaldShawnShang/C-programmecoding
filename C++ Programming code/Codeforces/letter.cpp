#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int n,m,maxx,maxy,minx=60,miny=60;
char a[55][55];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                minx=min(minx,i);
                miny=min(miny,j);
                maxx=max(maxx,i);
                maxy=max(maxy,j);
            }
        }   
    for(int i=minx;i<=maxx;i++)
    {    for(int j=miny;j<=maxy;j++)
    
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }   
    return 0;
}