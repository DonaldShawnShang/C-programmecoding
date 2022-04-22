#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<stack>
#include<string.h>
using namespace std;

/*
int main()
{
    //queue<char> a;
    //stack<char> c;
    string s1,s2;
    int no=1;
    stack<char> st;
    while(cin>>s1)
    {
        cin>>s2;
        if(s1==s2)
            {
                cout<<"Case "<<no++<<": Yes"<<endl;
                //break;
                continue;
            }
        else if(s1.size()!=s2.size())
            {
                cout<<"Case "<<no++<<": No"<<endl;
                //break;
                continue;
            }
        int k1=0,k2=0;
        while(true)
        {
            if(k1<(int)s1.size())
                st.push(s1[k1++]);
            if(st.top()==s2[k2])
            {
                st.pop();
                k2++;
                if(st.size()!=0)
                {
                    if(st.top()==s2[k2])
                    {
                        st.pop();
                        k2++;
                    }
                }
            }
            if(k1==(int)s1.size())
            {
                if(st.size()!=0)
                    if(st.top()!=s2[k2])break;
            }
           if(k2==(int)(s2.size()))
            break; 
        }
        
        if(st.size()==0){
            cout<<"Case "<<no++<<": Yes"<<endl;
        }
        else 
        {
            cout<<"Case "<<no++<<": No"<<endl;
            while(!st.empty())
                st.pop();
        }
    }
    return 0;
}*/


//#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
int main()
{
    string a, b;
    int count = 1;
    while (cin >> a >> b)
    {
        bool is = true;
        if (a.size() != b.size())
        {
            is = false;
        }
        int len = a.size();
        vector<char> s;
        int pa = 0, pb = 0;
        while(pa<len&&a.size()==b.size())
        //while (pa < len)
        {
            if (a[pa] == b[pb])
            {
                pa++;
                pb++;
            }
            else
            {
                if (s.empty())
                {
                    s.push_back(a[pa++]);
                }
                else
                {
                    if (s.back() == b[pb])
                    {
                        s.pop_back();
                        pb++;
                    }
                    else
                    {
                        s.push_back(a[pa++]);
                    }
                }
            }
        }
        if (pb != len || !s.empty())
            is = false;
        if (is)
        {
            printf("Case %d: Yes\n", count++);
        }
        else
        {
            printf("Case %d: No\n", count++);
        }
    }
}