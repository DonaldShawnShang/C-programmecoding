#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
int a,b,c,d;

bool cmp(ll a,ll b){
    return a<b;
}
int main()
{
    vector<int> sd;
    //ios::sync_with_stdio(0);
    for(int i=0;i<4;i++)
    {   int x;
        cin>>x;
        sd.push_back(x);
    }   
    sort(sd.begin(),sd.end());
    if(sd[0]+sd[1]>sd[2]||sd[1]+sd[2]>sd[3]) cout<<"TRIANGLE"<<endl;
    else if(sd[0]+sd[1]==sd[2]||sd[1]+sd[2]==sd[3]) cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}