#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<string.h>
#define pi 3.14159265357
using namespace std;

int t,n;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        double s=(n-1)*sin(pi/(double)n)*cos(pi/(double)n)+sin(pi/(double)n);
        printf("%.6f\n",s);
    }
    return 0;
}