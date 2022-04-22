#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int xs, xt, ys, yt;
int a,d;
int main()
{
    cin >> xs >> ys >> xt >> yt;
    int xym=abs(yt-ys)-abs(xt-xs);
    int mxy=abs(xt-xs)-abs(yt-ys);
    if(abs(xt-xs)>abs(yt-ys))
    {
        a=2*abs(yt-ys);
        if(mxy==1)
            d=1;
        else if(mxy==0)
            d=0;
        else if(mxy>1&&(mxy%2==0))
            d=2*mxy;
        else if(mxy>1&&(mxy%2!=0))
            d=2*mxy-1;
    }
    else{
        a=2*abs(xt-xs);
        if(xym==1)
            d=1;
        else if(xym==0)
            d=0;
        else if(xym>1&&(xym%2==0))
            d=2*xym;
        else if(xym>1&&(xym%2!=0))
            d=2*xym-1;
    }
    cout<<a+d<<endl;
    return 0;
}