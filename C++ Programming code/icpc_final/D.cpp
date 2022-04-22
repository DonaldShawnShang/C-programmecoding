#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int n,u,d,s;
int main()
{
    while(cin>>n>>u>>d>>s)
    {
        int floor,prefloor;
        int cnt=0;
        cin>>floor;
        if(floor>n)
            cnt=(floor-n)*u+s;
        else if(floor<n)
            cnt=(n-floor)*d+s;
        else if(floor==n)
            cnt+=0;
        while(getchar()!='\n')
        {
            prefloor=floor;
            cin>>floor;
            if(floor==prefloor)
                continue;
            else if(floor<prefloor)
                cnt+=d*(prefloor-floor)+s;
            else if(floor>prefloor)
                cnt+=u*(floor-prefloor)+s;
        }
        cout<<cnt<<endl;
    }
    return 0;
}