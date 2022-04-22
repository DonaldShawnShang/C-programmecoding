#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int y,w,d;
    cin>>y>>w;
    int maxd=max(y,w);
    maxd=6-maxd+1;
    if(maxd==1)cout<<"1/6"<<endl;
    if(maxd==2)cout<<"1/3"<<endl;
    if(maxd==3)cout<<"1/2"<<endl;
    if(maxd==4)cout<<"2/3"<<endl;
    if(maxd==5)cout<<"5/6"<<endl;
    if(maxd==6)cout<<"1/1"<<endl;
    return 0;
}