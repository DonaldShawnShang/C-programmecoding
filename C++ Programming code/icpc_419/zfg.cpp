#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;
int xs, xt, ys, yt;
int x, y;
int sum;
int main()
{
    cin>>xs>>xt>>ys>>yt;
    if(xs==xt&&ys!=yt)
    {
        sum=abs(ys-yt)+2*(abs(ys-yt)/2);
    }
    else if(ys==yt&&xs!=xt)
    {
        sum=abs(xs-xt)+2*(abs(xs-xt)/2);
    }
    else {
        y=abs(ys-yt);
        x=abs(xs-xt);
        
    }
    return 0;
}