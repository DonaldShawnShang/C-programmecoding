#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
struct cont
{
    char st[200] = {0};
    int fre;
};
cont conts[10000];
bool cmp(const cont &a, const cont &b)
{
    if (a.fre != b.fre)
        return a.fre > b.fre;
    else
        return (strcmp(a.st, b.st) < 0);
}
int main()
{
    string temstr;
    int count = 0;
    while (cin >> temstr)
    {
        int flag = 0, j = 0;
        char buf[200] = {0};
        for (int i = 0; i < temstr.size(); ++i)
        {
            if ((temstr[i] >= 'a' && temstr[i] <= 'z') || (temstr[i] >= 'A' && temstr[i] <= 'Z'))
            {
                temstr[i] = tolower(temstr[i]);
                buf[j++] = temstr[i];
            }
            else if (temstr[i] == '\'')
            {
                temstr = temstr.substr(0, temstr.length() - 2);
                flag = 1;
                break;
            }
            else
                flag = 1;
        }
        if (flag)
        {
            for (int k = 0; k < temstr.size(); ++k)
            {
                conts[count].st[k] = buf[k];
            }
            if (buf[0] == '\0')
                continue;
            conts[count++].fre = 1;
            continue;
        }
        for (int k = 0; k < temstr.size(); ++k)
        {
            conts[count].st[k] = temstr[k];
        }
        conts[count++].fre = 1;
    }
    for (int i = 0; i < count - 1; ++i)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (conts[j].fre == -1)
                continue;
            if (strcmp(conts[i].st, conts[j].st) == 0)
            {
                conts[j].fre = -1;
                conts[i].fre++;
            }
        }
    }
    sort(conts, conts + count, cmp);
    for (int i = 0; i < count; ++i)
    {
        if (conts[i].fre == -1 || conts[i].fre == 0)
            break;
        for (int j = 0; j < 200; ++j)
        {
            if (conts[i].st[j] == '\0')
                break;
            cout << conts[i].st[j];
        }
        cout << endl;
    }
    return 0;
}