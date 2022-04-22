#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int n,p1,p2,p3,t1,t2;
int sum;
int main()
{
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int lst_pos;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        if(i!=0)//第一次不算
        {
            sum+=min(t1,l-lst_pos)*p1;
            if(l-lst_pos>t1)//判断进入t2
            {
                sum+=p2*min(l-lst_pos-t1,t2);
                if(l-lst_pos>t1+t2)//判断进入t3
                {
                    sum+=p3*(l-lst_pos-t1-t2);
                }
            }   
        }
        sum+=p1*(r-l);
        lst_pos=r;
    }
    cout<<sum<<endl;
    return 0;
}