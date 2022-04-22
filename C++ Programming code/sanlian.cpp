#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
long long a[100001],b[100001],c[100001];
long long n,t;
int main()
{
    cin>>n;
    //long long a[100005],b[100005],c[100005];
    for(int i=0;i<n;i++){cin>>t;a[t]++;}
    for(int i=0;i<n;i++){cin>>t;b[t]++;}
    for(int i=0;i<n;i++){cin>>t;c[t]++;} 
    double sum=0.0;
    for(int i=0;i<100001;i++)
    {
        double temp=0.0;
        if(a[i]==0||b[i]==0||c[i]==0)
            continue;
        temp=double(a[i]*b[i]*c[i]);
        temp/=double(n*n*n);
        sum+=temp;
    }
    printf("%.10f\n",sum);
    return 0;
}