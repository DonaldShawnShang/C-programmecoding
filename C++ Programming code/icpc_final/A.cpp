#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>
using namespace std;
int n,q;
map<int,int> tree(n);
int main()
{
    int no=1;
    cin>>n>>q;  
    for(int i=0;i<n;i++)
    {
        int fa,so;
        cin>>fa>>so;
        tree[so]=fa;
    }
    for(int i=0;i<=q;i++)
    {
        map<int,int> b1;
        vector<int> a1;
        int a,b,j=0;
        cin>>a>>b;
        int cura=a,curb=b;
        while(cura!=0)
        {
            a1.push_back(cura);
            cura=tree(cura);
        }
        while(curb!=0)
        {
            b1[curb]=1;
            curb=tree[curb];
        }
        
        if(it1&&it2)
        {
                cout<<"Case "<<no++<<": Invalid"<<endl;
                return 0;
        }
    }
}