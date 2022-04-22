#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int t,n,r1,c1,r2,c2;
int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        cin>>r1>>c1>>r2>>c2;
        int a[x][x];
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<x;j++)
                a[i][j]=0;
        }
        a[r1-1][c1-1]=1;
        a[r2-1][c2-1]=1;
        if(r1!=r2&&c1!=c2)
        {
            a[r1-1][c2-1]=1;
            a[r2-1][c1-1]=1;
        }
        else if(r1==r2)
        {
            if(r1-2>=0)
            {
                a[r1-2][c1-1]=1;
                a[r1-2][c2-1]=1;
            }
            else{
                a[r1][c1-1]=1;
                a[r1][c2-1]=1;
            }
        }
        else if(c1==c2)
        {
            if((c2-2)>=0)
            {
                a[r1-1][c2-2]=1;
                a[r2-1][c2-2]=1;
            }
            else{
                a[r1-1][c2]=1;
                a[r2-1][c2]=1;
            }
        }

        for(int i=0;i<x;i++)
        {
            for(int j=0;j<x;j++)
                if(a[i][j])
                    cout<<"*";
                else 
                    cout<<".";
            cout<<endl;
        }
        
    }
    return 0;
}