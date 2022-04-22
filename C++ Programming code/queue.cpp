#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<unordered_map>
#define N 1e7
using namespace std;

unordered_map<string,int> ingroup;
queue<string> person[N];
int main()
{
    int g,n;
    while(cin>>g&&g!=0)
    {
        for(int i=0;i<g;i++)
        {
            cin>>n;
            for(int j=0;j<n;j++)
            {
                string x;
                cin>>x;
                ingroup[x]=i;
            }
        }
        string cmd;
        while(cin>>cmd&&cmd!="stop")
        {
            if(cmd="enqueue")
            {
                string x;
                cin>>x;
                
            }
        }
    }
    return 0;
}
