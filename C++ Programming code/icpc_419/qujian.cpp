#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<string.h>

using namespace std;
int n;
vector<long long> num(10005);
void find_minus(vector<long long> a(10005)){
    
}
int find_zero(vector<long long> a(10005))
{
    for(int i=0;i<a.size();i++)
        if(a[i]==0)
            return a.size()
        else return 0;
}
int find_pos(vector<long long> a(10005))
{

}
int main()
{
    cin>>n;
    while(n--)
    {
        long long x;
        cin>>x;
        num.push_back(x);
    }
    int tp1=find_minus(num);
    int tp2=find_zero(num);
    int tp3=find_pos(num);

}