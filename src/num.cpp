#pragma GCC optimize(2)
#include "num.h"
istream&operator>>(istream&in,num&o)
{
    string l;
    in>>l;
    for(int i=0;i<l.size();i++)
        o.number.push_back(l[i]-'0');
    return in;
}
ostream&operator<<(ostream&out,const num&o)
{
    for(int i=0;i<o.number.size();i++)
        out<<o.number[i];
    return out;
}
num operator+(num a,num b)
{
    num rtn;
    int _size=max(a.number.size(),b.number.size());
    reverse(a.number.begin(),a.number.end());
    reverse(b.number.begin(),b.number.end());
    for(int i=0;i<_size;i++)
    {
        if(i>=a.number.size())a.number.push_back(0);
        if(i>=b.number.size())b.number.push_back(0);
        if(rtn.number.size()==i)rtn.number.push_back(0);
        rtn.number[i]+=a.number[i]+b.number[i];
        if(rtn.number[i]>9)
        {
            rtn.number[i]-=10;
            rtn.number.push_back(1);
        }
    }
    reverse(rtn.number.begin(),rtn.number.end());
    return rtn;
}
