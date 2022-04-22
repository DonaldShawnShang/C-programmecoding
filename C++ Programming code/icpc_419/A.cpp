#include<iostream>
#include<cmath>
#include<string.h>
#include<vector>
#include<unordered_map>
#include<map>

using namespace std;

int n,cnt;
int a[1000][1000];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i>j&&a[i][j]!=a[j][i])
               cnt++; 
        }
    cout<<cnt<<endl;
    return 0;
}